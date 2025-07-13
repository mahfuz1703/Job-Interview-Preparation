#include <bits/stdc++.h>
using namespace std;

// Problem - https://codeforces.com/group/c3FDl9EUi9/contest/263096/problem/D

int main(){
    int n; cin >> n;
    stack<int> s;

    while(n--){
        string op; cin >> op;
        if(op == "push"){
            int x; cin >> x;
            s.push(x);
        }else{
            if(op == "top"){
                if(!s.empty()){
                    cout << s.top() << endl;
                }
            }else{
                if(!s.empty()){
                    s.pop();
                }
            }
        }
    }
}

// Time Complexity: O(n) for n operations
// Space Complexity: O(n) for the stack
// where n is the number of elements in the stack