#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

    cout << "Elements in set:" << endl;
    for (auto elem : s) {
        cout << elem << " ";
    }
    cout << endl;

    cout << "Is 30 present? " << (s.find(30) != s.end() ? "Yes" : "No") << endl;
    cout << "Is 60 present? " << (s.find(60) != s.end() ? "Yes" : "No") << endl;

    cout << "Size of set: " << s.size() << endl;

    s.erase(20); // Removing element 20
    cout << "After removing 20, size: " << s.size() << endl;

    cout << "Elements after removal:" << endl;
    for (auto elem : s) {
        cout << elem << " ";
    }
    cout << endl;

    s.clear(); // Clearing the set
    cout << "After clearing, size: " << s.size() << endl;

    return 0;
}