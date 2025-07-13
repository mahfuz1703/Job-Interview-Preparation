// Problem - https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1

class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        stack<int> st;
        vector<int> ans(arr.size(), -1);
        
        for(int i = arr.size()-1; i >= 0; i--){
            while(!st.empty() and st.top() <= arr[i]){
                st.pop();
            }
            
            if(!st.empty()){
                ans[i] = st.top();
            }
            st.push(arr[i]);
        }
        
        return ans;
    }
};

// Time Complexity: O(N)
// Space Complexity: O(N) for the stack and the answer vector
// where N is the number of elements in the input array.