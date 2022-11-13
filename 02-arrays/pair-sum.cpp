// https://www.codingninjas.com/codestudio/problems/pair-sum_697295
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> pairSum (vector<int> &arr, int s) {
    vector <vector <int>>ans;
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j] == s) {
                vector <int>temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                ans.push_back(temp);
            }
        }
    }
    return ans;
}

// int main() {
//     vector<int> arr({1, 2, 3, 4, 5});
//     int s = 5;

//     vector <vector <int>> ans = pairSum(arr, s);
//     // OP
//     // 1 4
//     // 2 3
// }