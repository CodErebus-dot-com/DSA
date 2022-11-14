// https://leetcode.com/problems/unique-number-of-occurrences/
// TA
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool uniqueOccurrence(vector<int> &arr) {
    vector<int> ans;
    
    int s = arr.size();
    sort(arr.begin(), arr.end());
    
    int count = 1;
    for(int i=0; i<s-1; i++) {
        if(arr[i] == arr[i+1]) count++;
        else {
            ans.push_back(count);
            count=1;
        }
        if(i+1 == s-1) {
            ans.push_back(count);
        }
    }

    int n = ans.size();
    sort(ans.begin(), ans.end());

    for(int i=0; i<n-1; i++) {
        if (ans[i] == ans[i+1]) return false;
    }
    return true;
}

int main() {
    vector<int> myVector1 ({1,2,2,1,1,3}); // o/p -> 1
    vector<int> myVector2 ({1,2}); // o/p -> 0
    int result1 = uniqueOccurrence(myVector1);
    int result2 = uniqueOccurrence(myVector2);
    cout << result1 << " " << result2;
}