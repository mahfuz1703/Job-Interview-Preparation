#include <bits/stdc++.h>
using namespace std;

void modifyByValue(int val){
    val = 20; // This will not change the original value
}

void modifyByReference(int &val){
    val = 20; // This will change the original value
}

void arrayModify(int *arr){
    arr[0] = 20; // This will change the first element of the array
}

int main(){
    int a = 10;
    int *p = &a; // Pointer to integer a
    cout << "Value of a: " << a << endl; // Output: 10
    cout << "Address of a: " << &a << endl; // Output: Address of a
    cout << "Value at pointer p: " << *p << endl; // Output: 10
    cout << "Address stored in pointer p: " << p << endl; // Output: Address of a

    *p = 20; // Changing value at address stored in p
    cout << "New value of a: " << a << endl; // Output: 20

    // Pointer of pointer
    int **q = &p; // Pointer to pointer p
    cout << &a << " " << p << " " << &p << " " << q << " " << &q << endl; // Output: Addresses of a, p, and q
    cout << "Value at pointer q: " << **q << endl; // Output: 20

    // Pointer to array
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to the first element of the array
    cout << "Array elements using pointer: ";
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " "; // Accessing array elements using pointer arithmetic
    }
    cout << endl;

    int val = 10;
    modifyByValue(val); // Passing by value

    modifyByReference(val); // Passing by reference

    arrayModify(arr); // Modifying array using pointer

    return 0;
}