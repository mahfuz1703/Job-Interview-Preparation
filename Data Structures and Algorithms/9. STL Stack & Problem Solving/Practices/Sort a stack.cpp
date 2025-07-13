//  Problem - https://www.geeksforgeeks.org/problems/sort-a-stack/1

/*The structure of the class is
class SortedStack{
public:
    stack<int> s;
    void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */
void SortedStack ::sort() {
    // Your code here
    stack<int> result;
    
    while(!s.empty()){
        int tp = s.top();
        s.pop();
        
        while(!result.empty()  and result.top() > tp){
            s.push(result.top());
            result.pop();
        }
        result.push(tp);
    }
    
    while(!result.empty()){
        cout << result.top() << " ";
        result.pop();
    }
}

// Time Complexity: O(n^2) in the worst case, where n is the number of elements in the stack.
// Space Complexity: O(n) for the auxiliary stack used for sorting.