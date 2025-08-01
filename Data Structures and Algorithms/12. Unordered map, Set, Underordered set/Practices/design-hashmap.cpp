// Problem - https://leetcode.com/problems/design-hashmap/
// Time Complexity - O(1) for put, get and remove operations
// Space Complexity - O(n) where n is the number of elements in the hashmap
#include <bits/stdc++.h>
using namespace std;

class MyHashMap {
public:
    unordered_map<int, int> ump;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        ump[key] = value;
    }
    
    int get(int key) {
        if(ump.find(key) != ump.end()){
            return ump[key];
        }else return -1;
    }
    
    void remove(int key) {
        ump.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */