// https://leetcode.com/problems/search-in-rotated-sorted-array-ii
#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int>& nums, int target) {
    int n=nums.size();
    int start=0, end=n-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(nums[mid]==target) return true;
        else if(nums[mid]>nums[end]) {
            if(target<nums[mid] && target>=nums[start]) end=mid-1;
            else start=mid+1;
        } else if(nums[mid]<nums[end]) {
            if(target>nums[mid] && target<=nums[end]) start=mid+1;
            else end=mid-1;
        }
        else end--;
    }
    return false;
}

int main(){
    vector<int> nums({4, 5, 6, 7, 8, 1, 2, 3});
    int target=7;
    int result = search(nums, target);
    cout << result;
}