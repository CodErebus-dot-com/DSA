// https://leetcode.com/problems/peak-index-in-a-mountain-array/
// https://leetcode.com/problems/find-peak-element
// https://www.codingninjas.com/codestudio/problems/peak-value_3210618
// https://www.codingninjas.com/codestudio/problems/find-peak-element_1081482
// https://www.codingninjas.com/codestudio/problems/easy_6613947
// https://practice.geeksforgeeks.org/problems/peak-element/1
#include <vector>
#include <iostream>
using namespace std;


int find_pivot(vector<int> arr) {
    int start = 0, end = arr.size()-1;
    
    while(start < end) {
        int mid = start + (end-start)/2;
        if(arr[mid] >= arr[mid+1]) end = mid; 
        else start = mid+1;        
    }
    return start;
}

int peakIndexInMountainArray(vector<int>& arr) {
    return find_pivot(arr);
}

int main() {
    vector<int> nums({0, 2, 4, 4, 5, 8, 10, 5, 2});
    int result = peakIndexInMountainArray(nums);
    cout << result;
}