#include <iostream>
#include <vector> // For vector operations
#include <algorithm> // For sort, reverse, find, unique, max_element, min_element, count, fill, rotate
#include <numeric> // For accumulate
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);

    for(int &x : v){
        cin >> x;
    }

    v.push_back(6); // Adding an element to the end of the vector
    v.push_back(7);
    v.pop_back(); // Removing the last element of the vector

    cout << "Size of vector: " << v.size() << endl; // Get the number of elements in the vector
    cout << "Capacity of vector: " << v.capacity() << endl; // Get the total capacity of the vector
    v.shrink_to_fit(); // Reduce the capacity to fit the current size
    cout << "Capacity after shrink_to_fit: " << v.capacity() << endl;

    cout << "Front element: " << v.front() << endl; // Get the first element of the vector
    cout << "Back element: " << v.back() << endl; // Get the last element of the vector

    v.insert(v.begin() + 1, 7); // Insert 7 at the second position
    v.erase(v.begin() + 1); // Remove the third element
    v.erase(v.begin() + 1, v.begin() + 4); // Remove the second to fouth elements

    v.pop_back(); // Remove the last element

    v.clear(); // Clear the vector
    

    // check if the vector is empty
    if(v.empty()){
        cout << "Vector is empty" << endl;
    } else {
        cout << "Vector is not empty" << endl;
    }

    sort(v.begin(), v.end()); // Sort the vector in ascending order
    sort(v.rbegin(), v.rend()); // Sort the vector in descending order

    reverse(v.begin(), v.end()); // Reverse the vector


    // Find an element in the vector
    auto it = find(v.begin(), v.end(), 5); // Find the first occurrence of 5
    if(it != v.end()){
        cout << "Found 5 at position: " << (it - v.begin()) << endl; // Print the position of 5
    } else {
        cout << "5 not found in the vector" << endl; // If 5 is not found
    }

    // Get unique elements in the vector
    sort(v.begin(), v.end()); // Sort the vector first
    auto last = unique(v.begin(), v.end()); // Remove duplicates
    v.erase(last, v.end()); // Erase the duplicates


    // Get  the maximum and minimum elements in the vector
    int maxElement = *max_element(v.begin(), v.end());
    int minElement = *min_element(v.begin(), v.end());
    cout << "Maximum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;


    // get count of a specific element in the vector
    int countOfTwo = count(v.begin(), v.end(), 2);
    cout << "Count of 2 in the vector: " << countOfTwo << endl;

    fill(v.begin(), v.end(), 0); // Fill the vector with 0

    // Rotate the elements of the vector
    // left rotation
    rotate(v.begin(), v.begin() + 1, v.end());
    // right rotation
    rotate(v.rbegin(), v.rbegin() + 1, v.rend());


    // get accumulated sum of the vector
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << endl;

    for(int x : v){
        cout << x << " ";
    }
    cout << endl;
}