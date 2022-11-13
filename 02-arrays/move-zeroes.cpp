// https://leetcode.com/problems/move-zeroes/
#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int i=0, N=0;
    while(i<nums.size()) {
        if(nums[i]!=0) swap(nums[i], nums[N++]);
        i++;
    }
}

void printArr(vector<int> arr) {
    for(int i=0; i<arr.size(); i++) cout<<arr[i]<<" ";
}

int main() {
    vector<int> v({0,1,0,3,12});
    moveZeroes(v);
    printArr(v);
}