#include <deque>
#include <iostream>
using namespace std;

int main() {
    // create a deque of integers
    deque<int> d;

    // add elements to the front and back of the deque
    d.push_front(10);
    d.push_back(20);
    d.push_front(30);
    d.push_back(40);
    d.push_front(50);

    // pop elements from the front and back of the deque
    d.pop_front(); // removes 50
    d.pop_back();  // removes 40

    // display the front element
    cout << "Front element: " << d.front() << endl; // should display 30

    // display the back element
    cout << "Back element: " << d.back() << endl; // should display 20

    // check size of the deque
    cout << "Size of deque: " << d.size() << endl; // should display 3

    // check if the deque is empty
    if (d.empty()) {
        cout << "Deque is empty." << endl;
    } else {
        cout << "Deque is not empty." << endl; // should display this
    }

    // print all elements in the deque
    cout << "Elements in the deque: ";
    for (const auto& elem : d) {
        cout << elem << " ";
    }
    cout << endl; // should display 30 20

    return 0;
}