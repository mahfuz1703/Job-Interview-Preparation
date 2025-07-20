#include <queue>
#include <iostream>
using namespace std;

int main() {
    // create a queue of integers
    queue<int> q;

    // add elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // pop elements from the queue
    q.pop(); // removes 10

    // display the front element
    cout << "Front element: " << q.front() << endl; // should display 20

    // display the back element
    cout << "Back element: " << q.back() << endl; // should display 50

    // check size of the queue
    cout << "Size of queue: " << q.size() << endl; // should display 4

    // check if the queue is empty
    if (q.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl; // should display this
    }

    // print all elements in the queue
    cout << "Elements in the queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl; // should display 20 30 40 50

    return 0;
}