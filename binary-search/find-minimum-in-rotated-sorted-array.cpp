// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array
// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii
// https://www.codingninjas.com/codestudio/problems/rotated-array_1093219

#include <iostream>
#include <vector>
using namespace std;

int minimumElement(vector<int> v, int n) {
    int start=0, end=n-1;
    
    if(v[start]<v[end]) return v[start];
    
    while(start<end) {
        int mid = start+(end-start)/2;
        if(v[mid]>v[end]) start=mid+1;
        else if(v[mid]<v[end]) end=mid;
        else end--;
    }

    return v[start]; 
}

int main() {
    vector<int> v({11, 12, 13, 15, 18, 2, 5, 6, 8});
    int n=9;
    int ans = minimumElement(v, n);
    cout << ans;
}