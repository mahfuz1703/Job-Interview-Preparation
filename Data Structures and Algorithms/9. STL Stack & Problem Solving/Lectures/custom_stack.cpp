#include <iostream>
using namespace std;

template <typename T> class stack{
private:
    int Top; // Index of the top element
    int capacity; // Total capacity of the stack
    T* arr; // Pointer to the array that holds the stack elements

public:
    // Constructor to initialize the stack
    stack(int capacity = 10){ // Default capacity is set to 10 if not specified
        this->capacity = capacity; // Set the capacity of the stack
        Top = -1; // Initialize the top index to -1 (indicating an empty stack)
        arr = new T[capacity]; // Allocate memory for the stack array
    }

    void push(T data){ // Time Complexity: O(1)
        if(Top == capacity - 1){
            cout << "Stack overflow" << endl; // If the stack is full, we cannot add more elements
            return;
        }
        arr[++Top] = data; // Increment the top index and add the new element
    }

    void pop(){ // Time Complexity: O(1)
        if(Top < 0){
            cout << "Stack underflow" << endl; // If the stack is empty, we cannot remove an element
            return;
        }
        Top--; // Decrement the top index to remove the top element
    }

    int top(){ // Time Complexity: O(1)
        if(Top < 0){
            cout << "Stack is empty" << endl; // If the stack is empty, we cannot return the top element
            exit(1); // Exit the program
        }
        return arr[Top]; // Return the top element
    }

    int size(){ // Time Complexity: O(1)
        return Top+1; // Return the number of elements in the stack
    }

    bool empty(){  // Time Complexity: O(1)
        return Top < 0; // Return true if the stack is empty, otherwise false
    }
};

int main(){
    stack <int> st(5);

    for(int i = 0; i < 6; i++){
        int x; cin >> x; // Input elements to be pushed onto the stack
        st.push(x);
    }

    // Displaying the top element
    cout << "Top element: " << st.top() << endl;

    // Popping an element from the stack
    st.pop();
    cout << "Top element after pop: " << st.top() << endl;

    // Checking if the stack is empty
    if (st.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    // Displaying the size of the stack
    cout << "Size of stack: " << st.size() << endl;

    // access all elements in the stack
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}