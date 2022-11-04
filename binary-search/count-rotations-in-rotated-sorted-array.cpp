// program to count the number of rotations made on a rotated sorted array
#include <iostream>
#include <vector>
using namespace std;

int countRotations(vector<int> v, int n) {
    int start=0, end=n-1;
    
    if(v[start]<v[end]) return v[start];
    
    while(start<end) {
        int mid = start+(end-start)/2;
        if(v[mid]>v[end]) start=mid+1;
        else if(v[mid]<v[end]) end=mid;
        else end--;
    }

    // returns count if rotations occur in anti-clockwise direction
    return end; 
    // returns count if rotations occur in clockwise direction
    // return n-end;
}

int main() {
    vector<int> v({11, 12, 13, 15, 18, 2, 5, 6, 8});
    int n=9;
    int ans = countRotations(v, n);
    cout << ans;
}