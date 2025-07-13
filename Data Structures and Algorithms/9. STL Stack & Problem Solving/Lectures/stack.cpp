#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;

    // Pushing elements onto the stack
    // s.push(10);
    // s.push(20);
    // s.push(30);
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        s.push(x);
    }

    // Displaying the top element
    cout << "Top element: " << s.top() << endl;

    // Popping an element from the stack
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;

    // Checking if the stack is empty
    if (s.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    // Displaying the size of the stack
    cout << "Size of stack: " << s.size() << endl;

    // access all elements in the stack
    s.push(30);
    s.push(40);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}