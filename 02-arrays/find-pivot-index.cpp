// https://leetcode.com/problems/find-pivot-index
// same as find the middle index in array

#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int sum=0, lSum=0, n=nums.size();
    
    for(int i=0; i<n; i++) sum+=nums[i];
    for(int i=0; i<n; i++) {
        lSum+=nums[i];
        if(lSum == sum) return i;
        sum-=nums[i];
    }
    return -1;
}

int main() {
    vector<int> nums({2,3,-1,8,4});
    int pivot = pivotIndex(nums);
    cout << pivot;
}