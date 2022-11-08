// https://leetcode.com/problems/kth-missing-positive-number/
#include<iostream>
#include<vector>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int s=0, e=arr.size();

    while(s<e) {
        int m=s+(e-s)/2;
        if(arr[m]-1-m<k) s=m+1;
        else e=m;
    }
    return s+k;
}

int main() {
    vector<int> arr({2,3,4,7,11});
    int k=5;

    int result = findKthPositive(arr, k);
    cout << result;
}