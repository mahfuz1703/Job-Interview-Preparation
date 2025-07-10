#include <bits/stdc++.h>
using namespace std;

int main(){
    string path; cin >> path;

    // Extracting filename from path without using built-in functions
    // This approach manually finds the last slash and extracts the filename.
    // It is more verbose and less readable than using built-in functions.
    // It is useful for understanding how string manipulation works.
    // It is also useful for educational purposes.
    int lastSlash;
    for(int i = path.size() - 1; i >= 0; i--){
        if(path[i] == '/'){
            lastSlash = i;
            break;
        }
    }
    string filename = "";
    for(int i = lastSlash + 1; i < path.size(); i++){
        filename += path[i];
    }
    cout << filename << "\n";



    // Extracting filename from path using built-in functions
    // This is an alternative approach using string functions.
    // It is more concise and easier to read.
    lastSlash = path.find_last_of('/');
    filename = path.substr(lastSlash + 1);
    cout << filename << "\n";
    return 0;
}

// Time Complexity: O(n), where n is the length of the path string.
// Space Complexity: O(n), for storing the filename string.

