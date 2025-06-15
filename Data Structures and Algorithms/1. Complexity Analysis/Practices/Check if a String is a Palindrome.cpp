#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n) // where n is the length of the string
// Space Complexity: O(1)
bool isPalindrome(string str){
    int l = 0, r = str.size() - 1;

    while(l < r){
        if(str[l] != str[r]){
            return false; // If characters don't match, it's not a palindrome
        }
        l++;
        r--;
    }
    return true; // If all characters match, it is a palindrome
}

int main() {
    string str; cin >> str;

    if(isPalindrome(str)){
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}