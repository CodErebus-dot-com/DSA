// https://leetcode.com/problems/single-element-in-a-sorted-array
// https://www.codingninjas.com/codestudio/problems/unique-element-in-sorted-array_1112654
// https://www.codingninjas.com/codestudio/problems/occurs-once_1214969
#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int s=0, e=nums.size()-1;
    
    while(s<e){
        int m=s+(e-s)/2;
        if((m%2==0 && nums[m]==nums[m+1]) || (m%2==1 && nums[m]==nums[m-1])) s=m+1;
        else e=m;
    }
    return nums[s];
}

int main() {
    vector<int> v({1, 1, 2, 2, 4, 5, 5});
    int ans = singleNonDuplicate(v);
    cout << ans;
}