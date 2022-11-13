// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& nums) {
    int n=nums.size(), count=0;
    for(int i=1; i<n; i++) if(nums[i]<nums[i-1]) count++;
    if(nums[n-1]>nums[0]) count++;
    return count<=1;
}

int main() {
    vector<int> nums({1,2,3,4,5,8,7});
    bool result=check(nums);
    cout<<result;
}