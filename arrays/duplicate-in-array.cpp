// https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr({6, 3, 1, 5, 4, 3, 2});
    int ans = 0;
    for(int i=0; i<arr.size(); i++) {
        ans = ans ^ arr[i];
    }
    for(int j=1; j<arr.size(); j++) {
         ans = ans ^ j;
    }
    cout<<ans;
}