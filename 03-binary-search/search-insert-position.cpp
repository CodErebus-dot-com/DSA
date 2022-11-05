// https://leetcode.com/problems/search-insert-position
#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int s=0, e=nums.size()-1;
    
    while(s<=e) {
        int m=s+(e-s)/2;
        
        if(nums[m]==target) return m;
        else if(nums[m]>target) e=m-1;
        else s=m+1;
    }
    return s;
}

int main() {
    vector<int> v({1,2,3,4,8,10,10,12,19});
    int n=v.size();
    int k=5;

    int result=searchInsert(v,k);
    cout<<result;
}