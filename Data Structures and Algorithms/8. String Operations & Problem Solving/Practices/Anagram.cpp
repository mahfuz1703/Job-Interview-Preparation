#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b; cin >> a >> b;

    // Check if two strings are anagrams using frequency counting
    // This approach counts the frequency of each character in both strings and compares them.
    // It is more efficient than sorting and comparing.
    // Time Complexity: O(n), where n is the length of the strings.
    // Space Complexity: O(1), as we are using a fixed-size array for character
    int a_freq[26] = {0}, b_freq[26] = {0};
    for(char c : a){
        a_freq[c - 'a']++;
    }
    for(char c : b){
        b_freq[c - 'a']++; 
    }
    bool isAnagram = true;
    for(int i = 0; i < 26; i++){
        if(a_freq[i] != b_freq[i]){
            isAnagram = false;
            break;
        }
    }


    // Alternatively, we can use the sort function to check if two strings are anagrams
    // This approach sorts both strings and compares them.
    // It is more concise and easier to read.
    // Time Complexity: O(n log n), where n is the length of the strings.
    // Space Complexity: O(n), for storing the sorted strings.
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a == b){
        isAnagram = true;
    } else {
        isAnagram = false;
    }


    // Output the result
    if(isAnagram){
        cout << "Yes, they are anagrams.\n";
    } else {
        cout << "No, they are not anagrams.\n";
    }
    
    return 0;
}