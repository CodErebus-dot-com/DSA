// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

bool isValid(vector<int>& nums, int t, int mid) {
    double count=0;
    for(int i=0; i<nums.size(); i++) {
        count+=ceil(nums[i]/double(mid));
        if(count>t) return false;
    }
    return true;
}

int smallestDivisor(vector<int>& nums, int threshold) {
    int s=0, e=*max_element(nums.begin(), nums.end()), divisor=-1;
    
    while(s<=e) {
        int m=s+(e-s)/2;
        if(isValid(nums, threshold, m)) divisor=m, e=m-1;
        else s=m+1;
    }
    return divisor;
}

int main() {
    int threshold=6;
    vector<int> nums({1,2,5,9});

    long long int result = smallestDivisor(nums, threshold);
    cout << result;
}