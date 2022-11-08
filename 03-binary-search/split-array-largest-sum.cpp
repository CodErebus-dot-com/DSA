// https://leetcode.com/problems/split-array-largest-sum/
#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>& nums, int k, int mid) {
    int sum=0, partition=1;
    for(int i=0; i<nums.size(); i++) {
        sum+=nums[i];
        if(sum>mid) partition++, sum=nums[i];
        if(partition>k || nums[i]>mid) return false;
    }
    return true;
}

int splitArray(vector<int>& nums, int k) {
    int s=0, e=0, ans=-1;
    for(int i=0; i<nums.size(); i++) {
        e+=nums[i];
    }
    
    while(s<=e) {
        int m=s+(e-s)/2;
        if(isValid(nums, k, m)) ans=m, e=m-1;
        else s=m+1;
    }
    return ans;
}

int main() {
    vector<int> arr({7,2,5,10,8});
    int k=2;

    int result = splitArray(arr, k);
    cout << result;
}