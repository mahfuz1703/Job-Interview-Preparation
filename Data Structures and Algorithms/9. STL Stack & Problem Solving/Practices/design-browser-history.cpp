// Problem - https://leetcode.com/problems/design-browser-history/

// Time Complexity - O(1) for all operations
// Space Complexity - O(n) for storing elements in the stack

class BrowserHistory {
public:
    stack<string> st;
    stack<string> tmp;
    BrowserHistory(string homepage) {
        st.push(homepage);
    }
    
    void visit(string url) {
        st.push(url);
        while (!tmp.empty()) {
            tmp.pop();
        }
    }
    
    string back(int steps) {
        while(steps > 0 && st.size() > 1){
            tmp.push(st.top());
            st.pop();
            steps--;
        }
        return st.top();
    }
    
    string forward(int steps) {
        while(steps > 0 && !tmp.empty()){
            st.push(tmp.top());
            tmp.pop();
            steps--;
        }
        return st.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */