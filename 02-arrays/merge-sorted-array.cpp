// https://leetcode.com/problems/merge-sorted-array/
// https://www.codingninjas.com/codestudio/problems/ninja-and-sorted-arrays_1214628
#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> nums1, int m, vector<int> nums2, int n) {
    int i=0, j=0, size=nums1.size();

    while(i<m && j<n) {
        if(nums1[i]<nums2[j]) nums1.push_back(nums1[i++]);
        else nums1.push_back(nums2[j++]);
    }

    while(i<m) nums1.push_back(nums1[i++]);
    while(j<n) nums1.push_back(nums2[j++]);

    nums1.erase(nums1.begin(), nums1.begin()+size);
    return nums1;
}

void printArr(vector<int> arr) {
    for(int i=0; i<arr.size(); i++) cout<<arr[i]<<" ";
}

int main() {
    vector<int> nums1({1,3,5,7,9});
    vector<int> nums2({2,4,6});
    int m=nums1.size(), n=nums2.size();

    vector<int> result=merge(nums1, m, nums2, n);
    printArr(result);
}