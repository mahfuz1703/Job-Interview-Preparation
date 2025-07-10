#include <bits/stdc++.h>
using namespace std;

int main(){
    string str; cin >> str;

    // Convert case of each character in the string without using built-in functions
    // This approach manually checks the ASCII values of characters and converts them.
    // It is more verbose and less readable than using built-in functions.
    // It is useful for understanding how character case conversion works.
    // Time Complexity: O(n), where n is the length of the string.
    // Space Complexity: O(1), as it modifies the string in place.
    // Note: ASCII values for 'A' to 'Z' are 65 to 90, and for 'a' to 'z' are 97 to 122.
    // To convert uppercase to lowercase, we can add 32 to the ASCII value.
    // To convert lowercase to uppercase, we can subtract 32 from the ASCII value.
    for(char &c : str){
        // Convert each character to lowercase if it is uppercase
        if(c >= 'A' && c <= 'Z'){
            c = c + 32; // or c = c + ('a' - 'A');
        }
        // Convert each character to uppercase if it is lowercase
        else if(c >= 'a' && c <= 'z'){
            c = c - 32; // or c = c - ('a' - 'A');
        }
    }


    // Alternatively, we can use the built-in functions to convert case
    // This approach uses the transform function from the algorithm library to convert case.
    // It is more concise and easier to read.
    // Time Complexity: O(n), where n is the length of the string.
    // Space Complexity: O(1), as it modifies the string in place.
    for(char &c : str){
        if(isupper(c)){
            c = tolower(c);
        } else if(islower(c)){
            c = toupper(c);
        }
    }

    // Output the modified string
    cout << str << "\n";
    return 0;
}