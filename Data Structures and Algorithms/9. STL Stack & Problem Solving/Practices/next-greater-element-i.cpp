// Problem - https://leetcode.com/problems/next-greater-element-i/description/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int> st;

        for (int num : nums2) {
            while (!st.empty() && num > st.top()) {
                mp[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        vector<int> ans;
        for (int num : nums1) {
            ans.push_back(mp.count(num) ? mp[num] : -1);
        }

        return ans;
    }
};