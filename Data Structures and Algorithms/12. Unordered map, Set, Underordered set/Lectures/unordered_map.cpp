#include <bits/stdc++.h>
using namespace std;

int main(){
	unordered_map<int,int> mp;

	mp[1] = 10;
    mp[2] = 20;
    mp[3] = 30;
    mp[4] = 40;
    mp[5] = 50;

    cout << mp[3] << endl; // Accessing value associated with key 3
    cout << "Is key 6 present? " << (mp.find(6) != mp.end() ? "Yes" : "No") << endl;
    cout << "Is key 2 present? " << (mp.find(2) != mp.end() ? "Yes" : "No") << endl;

    cout << "Size of unordered_map: " << mp.size() << endl;

    cout << "Elements in unordered_map:" << endl;
    for (auto pair : mp) {
        cout << pair.first << " : " << pair.second << endl;
    }

    mp.erase(2); // Removing key 2
    cout << "After removing key 2, size: " << mp.size() << endl;

    cout << "Elements after removal:" << endl;
    for (auto pair : mp) {
        cout << pair.first << " : " << pair.second << endl;
    }

    mp.clear(); // Clearing the unordered_map
    cout << "After clearing, size: " << mp.size() << endl;

    

    return 0;
}
