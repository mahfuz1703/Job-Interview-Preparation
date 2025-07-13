// Problem - https://www.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1

class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        stack <int> tmp;
        int n = s.size();
        int cnt = n/2;
        while(cnt--){
            tmp.push(s.top());
            s.pop();
        }
        s.pop();
        
        while(!tmp.empty()){
            s.push(tmp.top());
            tmp.pop();
        }
    }
};

// Time Complexity: O(n) where n is the size of the stack
// Space Complexity: O(n) for the temporary stack used to hold elements