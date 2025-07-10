#include <bits/stdc++.h>
using namespace std;

int main(){
    string str; cin >> str;

    // Check if the string is a palindrome using two-pointer technique
    // This approach uses two pointers to compare characters from both ends of the string.
    // It is more efficient than reversing the string and comparing.
    // It is also useful for understanding how to check for palindromes without using built-in functions.
    // It is also useful for educational purposes.
    // Time Complexity: O(n), where n is the length of the string.
    // Space Complexity: O(1), as it uses only a constant amount of extra space
    int left = 0, right = str.size() - 1;
    bool isPalindrome = true;
    while(left < right){
        if(str[left] != str[right]){
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }


    // Alternatively, we can check if the string is a palindrome by reversing it
    // This approach uses the reverse function from the algorithm library to reverse the string.
    // It is more concise and easier to read.
    // Time Complexity: O(n), where n is the length of the string.
    // Space Complexity: O(n), for storing the reversed string.
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    if(reversedStr == str){
        isPalindrome = true;
    } else {
        isPalindrome = false;
    }


    if(isPalindrome){
        cout << "Yes, it is a palindrome.\n";
    } else {
        cout << "No, it is not a palindrome.\n";
    }
    return 0;
}