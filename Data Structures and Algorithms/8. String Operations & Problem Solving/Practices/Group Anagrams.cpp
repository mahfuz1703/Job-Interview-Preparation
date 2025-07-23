// Problem - https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string, vector<string>>  mp;
        for(auto u : strs){
            vector<int> count(26, 0);
            for(auto ch : u){
                count[ch - 'a']++;
            }

            string key = to_string(count[0]);
            for(int i = 1;  i < 26; i++){
                key += ',' + to_string(count[i]);
            }
            // cout << key << "\n";
            mp[key].push_back(u);
        }
        for(auto [k, v]: mp){
            ans.push_back(v);
        }
        return ans;
    }
};

// Time Complexity: O(n * m), where n is the number of strings and m is the maximum length of a string.
// Space Complexity: O(n * m), for storing the grouped anagrams in the map and the result vector.
