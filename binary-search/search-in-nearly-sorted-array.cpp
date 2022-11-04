// program to search in nearly sorted array
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums, int target) {
    int n=nums.size();
    int start=0, end=n-1;

    while(start<=end) {
        int mid=start+(end-start)/2;

        if(nums[mid]==target) return mid;
        else if(mid<end && nums[mid+1]==target) return mid+1;
        else if(start<mid && nums[mid-1]==target) return mid-1;
        else if(target>nums[mid]) start=mid+2;
        else end=mid-1;
    }
    return -1;
}

int main() {
    vector<int> nums({6, 7, 8, 8, 10, 9});
    int target=8;
    int result = binarySearch(nums, target);
    cout << result;
}
