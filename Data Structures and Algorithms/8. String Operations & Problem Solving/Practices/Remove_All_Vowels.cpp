#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    // Check if the character is a vowel (both uppercase and lowercase)
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main(){
    string str; cin >> str;

    // Remove all vowels from the string using a loop
    // This approach iterates through the string and removes vowels one by one.
    // It is more verbose and less efficient than using the erase-remove idiom.
    // Time Complexity: O(n^2), where n is the length of the string,
    // because each erase operation can take O(n) time in the worst case.
    // Space Complexity: O(1), as it modifies the string in place.
    // Note: This is not the most efficient way to remove vowels from a string.
    for(int i = 0; i < str.size(); i++){
        if(isVowel(str[i])){
            // If the character is a vowel, remove it by shifting the rest of the string left
            str.erase(i, 1);
            i--; // Decrement i to check the next character at the same position
        }
    }


    // Alternatively, we can use the erase-remove idiom to remove vowels
    // This approach uses the remove_if function from the algorithm library to remove vowels.
    // It is more concise and efficient.
    // Time Complexity: O(n), where n is the length of the string.
    // Space Complexity: O(n), for storing the modified string.
    // Note: This is the preferred way to remove elements from a container in C++.
    string result = "";
    for(char c : str){
        if(string("aeiouAEIOU").find(c) == -1) {
            // If the character is not a vowel, append it to the result
            result += c;
        }
    }
    cout << result << "\n";

    // Output the modified string
    cout << str << "\n";
    return 0;
}