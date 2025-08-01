#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> us;

    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(40);
    us.insert(50);

    cout << "Elements in unordered_set:" << endl;
    for (auto elem : us) {
        cout << elem << " ";
    }
    cout << endl;

    cout << "Is 30 present? " << (us.find(30) != us.end() ? "Yes" : "No") << endl;
    cout << "Is 60 present? " << (us.find(60) != us.end() ? "Yes" : "No") << endl;

    cout << "Size of unordered_set: " << us.size() << endl;

    us.erase(20); // Removing element 20
    cout << "After removing 20, size: " << us.size() << endl;

    cout << "Elements after removal:" << endl;
    for (auto elem : us) {
        cout << elem << " ";
    }
    cout << endl;

    us.clear(); // Clearing the unordered_set
    cout << "After clearing, size: " << us.size() << endl;

    cout << "Is 10 present? " << (us.find(10) != us.end() ? "Yes" : "No") << endl;

    return 0;
}