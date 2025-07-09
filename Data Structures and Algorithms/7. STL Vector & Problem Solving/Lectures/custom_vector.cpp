#include <iostream>
using namespace std;

template <typename T> class Vector{
    T* arr; // Pointer to the array
    int capacity; // Total capacity of the vector
    int current; // Current size of the vector

public:
    // Default constructor to initialize the vector
    Vector(int size = 0){
        arr = new T[size]; // Allocate memory for the array
        capacity = size; // Set the capacity to the initial size
        current = 0; // Initialize the current size to 0
    }

    // Destructor to free allocated memory
    ~Vector(){
        delete[] arr; // Free the memory allocated for the array
    }

    // Function to add an element to the vector
    void push_back(T data){
        // Check if the current size is equal to the capacity. If so, we need to increase the capacity.
        if(current == capacity){
            T* newArr = new T[2 * capacity]; // Allocate a new array with double the capacity

            // Copy the existing elements to the new array
            for(int i = 0; i < current; i++){
                newArr[i] = arr[i];
            }

            // delete the old array
            delete[] arr;

            // Update the pointer to point to the new array
            arr = newArr;
            // Update the capacity to the new capacity
            capacity *= 2;
        }

        // Add the new element to the end of the vector
        arr[current] = data;
        current++; // Increment the size of the vector
    }

    // Function to add an element at a specific index
    void insert(T data, int index){

        // Check if the index is valid
        if(index < 0 || index > current){
            cout << "Index out of bounds" << endl;
            return; // Return if the index is invalid
        }

        if(index == capacity){
            push_back(data); // If the index is equal to the capacity, we can use push_back to add the element
        }else{
            arr[index] = data; // Add the element at the specified index
        }
    }

    // Function to remove the last element from the vector
    void pop_back(){
        if(current == 0){
            cout << "Vector is empty" << endl; // If the vector is empty, we cannot remove an element
            return;
        }
        current--; // Decrement the size of the vector
    }

    // Function to get size of the vector
    int size(){
        return current; // Return the current size of the vector
    }

    // get the capacity of the vector
    int get_capacity(){
        return capacity; // Return the total capacity of the vector
    }

    // Function to get the element at a specific index
    T get(int index){
        if(index < 0 || index >= current){
            cout << "Index out of bounds" << endl; // If the index is invalid,
            exit(1); // Exit the program
        }
        return arr[index]; // Return the element at the specified index
    }

    // Function to check if the vector is empty
    bool empty(){
        return current == 0; // Return true if the current size is 0, otherwise
    }

    // Function to clear the vector
    void clear(){
        current = 0; // Set the current size to 0
    }

    // Function to print the elements of the vector
    void print(){
        for(int i = 0; i < current; i++){
            cout << arr[i] << " "; // Print each element followed by a space
        }
        cout << endl; // Print a newline at the end
    }

};

int main(){
    int n; cin >> n; // Input the number of elements
    Vector<int> v(n); // Create a vector of integers
    for(int i = 0; i < n; i++){
        int x; cin >> x; // Input each element
        v.push_back(x); // Add the element to the vector
    }

    v.print();

    v.push_back(6); // Add an element to the end of the vector
    v.push_back(7); // Add another element to the end of the vector

    v.print(); // Print the vector after adding elements
    v.pop_back(); // Remove the last element of the vector
    v.print(); // Print the vector after removing the last element

    cout << "Size of vector: " << v.size() << endl; // Get the number of elements in the vector
    cout << "Capacity of vector: " << v.get_capacity() << endl; // Get the total capacity of the vector
    v.clear(); // Clear the vector
    cout << "Size after clear: " << v.size() << endl; // Print the size after clearing the vector
    cout << "Capacity after clear: " << v.get_capacity() << endl; // Print the capacity after clearing the vector

    // Check if the vector is empty
    if(v.empty()){
        cout << "Vector is empty" << endl; // If the vector is empty, print a message
    } else {
        cout << "Vector is not empty" << endl; // If the vector is not empty, print a message
    }

    // Insert an element at a specific index
    v.insert(5, 2); // Insert 5 at index 2
    v.print(); // Print the vector after inserting the element

}