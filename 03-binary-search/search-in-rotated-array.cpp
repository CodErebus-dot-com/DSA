// https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554
// https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_630450
// https://leetcode.com/problems/search-in-rotated-sorted-array
#include <iostream>
#include <vector>
using namespace std;

// int binarySearch(int arr[], int s, int K, int e) {
//     int start=s, end=e;
//     int mid=start+(end-start)/2;

//     while(start<=end){
//         if(arr[mid]==K) return mid;
//         else if(arr[mid]>K) end=mid-1;
//         else start=mid+1;
//         mid=start+(end-start)/2;
//     }
//     return -1;
// }

// int pivotEle(int arr[], int n) {
//     int start=0, end=n-1;
//     int mid=start+(end-start)/2;

//     while(start<end){
//         if(arr[mid]>=arr[0]) start=mid+1;
//         else end=mid;
//         mid=start+(end-start)/2;
//     }
//     return start;
// }
// int main(){
//     int arr[]={4, 5, 6, 7, 8, 1, 2, 3};
//     int key=7, n=size(arr);
//     int result = pivotEle(arr, n);
    
//     if(key>=arr[result] && key<=arr[n-1]) cout << binarySearch(arr, result, key, n-1);
//     else cout << binarySearch(arr, 0, key, result-1);
// }


// more concise solution
int binarySearch(vector<int>& nums, int target) {
    int n=nums.size();
    int start=0, end=n-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(nums[mid]==target) return mid;
        else if(nums[mid]>nums[end]) {
            if(target<nums[mid] && target>=nums[start]) end=mid-1;
            else start=mid+1;
        } else if(nums[mid]<nums[end]) {
            if(target>nums[mid] && target<=nums[end]) start=mid+1;
            else end=mid-1;
        }
        else end--;
    }
    return -1;
}

int main(){
    vector<int> nums({4, 5, 6, 7, 8, 1, 2, 3});
    int target=7;
    int result = binarySearch(nums, target);
    cout << result;
}