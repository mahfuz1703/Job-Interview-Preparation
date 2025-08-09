#include <bits/stdc++.h>
using namespace std;


int main() {
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(15);

    cout << "Top element: " << pq.top() << endl; // Should print 20

    pq.pop();
    cout << "Top element after pop: " << pq.top() << endl; // Should print 15

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // Using a min-heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(5);
    minHeap.push(15);

    cout << "Top element: " << minHeap.top() << endl; // Should print 5

    minHeap.pop();
    cout << "Top element after pop: " << minHeap.top() << endl; // Should print 10

    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;

    // Using a priority queue of pairs
    priority_queue<pair<int, int>> pqPairs;

    pqPairs.push({10, 1});
    pqPairs.push({20, 2});
    pqPairs.push({5, 3});
    pqPairs.push({15, 4});

    while (!pqPairs.empty()) {
        cout << "(" << pqPairs.top().first << ", " << pqPairs.top().second << ") ";
        pqPairs.pop();
    }
    cout << endl;

    // Using a min-heap of pairs
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeapPairs;

    minHeapPairs.push({10, 1});
    minHeapPairs.push({20, 2});
    minHeapPairs.push({5, 3});
    minHeapPairs.push({15, 4});

    while (!minHeapPairs.empty()) {
        cout << "(" << minHeapPairs.top().first << ", " << minHeapPairs.top().second << ") ";
        minHeapPairs.pop();
    }
    cout << endl;

    return 0;
}

/*
    Time Complexity:
        - Insertion: O(log n) for each element
        - Accessing top element: O(1)
        - Deletion of top element: O(log n)
        - Total for n elements: O(n log n)
        - Size operation: O(1)
        - Checking if empty: O(1)
    Space Complexity:
        - O(n) for storing the elements in the priority queue
*/