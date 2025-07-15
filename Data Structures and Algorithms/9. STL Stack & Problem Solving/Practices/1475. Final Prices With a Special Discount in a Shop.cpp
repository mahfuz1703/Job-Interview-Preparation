// Problem - https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack <int> st;
        vector<int> ans(prices.size());

        for(int i = prices.size()-1; i >= 0; i--){
            while(!st.empty() and st.top() > prices[i]){
                st.pop();
            }

            if(!st.empty()){
                ans[i] = prices[i]  - st.top();
            }
            if(st.empty()){
                ans[i] = prices[i];
            }

            st.push(prices[i]);
        }

        return ans;
    }
};

// Time Complexity - O(n)
// Space Complexity - O(n)
// n = size of prices vector