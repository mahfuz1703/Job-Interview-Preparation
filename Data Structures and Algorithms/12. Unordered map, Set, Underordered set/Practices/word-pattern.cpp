// Problem - https://leetcode.com/problems/word-pattern/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        stringstream str(s);
        string word;
        while(str >> word){
            words.push_back(word);
        }
        if(pattern.size() != words.size()) return false;

        unordered_map<char, string> patternToWord;
        unordered_map<string, char> wordToPattern;

        for(int i = 0; i < words.size(); i++){
            char p = pattern[i];
            string w = words[i];
            if((patternToWord.count(p) and patternToWord[p] != w) or
                (wordToPattern.count(w) and wordToPattern[w] != p)
            ) return false;

            patternToWord[p] = w;
            wordToPattern[w] = p;
        }

        return true;
    }
};

// Time Complexity: O(n), where n is the number of characters in the string s.
// Space Complexity: O(n), for storing the mappings in the unordered maps.