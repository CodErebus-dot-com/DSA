// https://leetcode.com/problems/rotate-array/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> rotate(vector<int> nums, int k) {
    // solution with O(1) space complexity
    // k%=nums.size();
    // reverse(nums.begin(), nums.end());
    // reverse(nums.begin(), nums.begin()+k);
    // reverse(nums.begin()+k, nums.end());
    // return nums;

    // alternate soln
    int n=nums.size();
    vector<int> temp(n);
    
    for(int i=0; i<n; i++) temp[(i+k)%n] = nums[i];
    return nums=temp;
}

void printArr(vector<int> arr) {
    for(int i=0; i<arr.size(); i++) cout<<arr[i]<<" ";
}

int main() {
    vector<int> nums({1,2,3,4,5,6,7});
    int k=3;

    vector<int> result=rotate(nums, k);
    printArr(result);
}