// https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559
#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid){
    int cowCount=1, lastPos=stalls[0];
    for(int i=0; i<stalls.size(); i++){
        if(stalls[i]-lastPos>=mid) {
            cowCount++;
            if(cowCount == k) return true;
            lastPos=stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int start=0, end=*max_element(stalls.begin(), stalls.end());
    int mid=start+(end-start)/2, ans=-1;
    
    while(start<=end){
        if(isPossible(stalls, k, mid)) {
            ans=mid;
            start=mid+1;
        } else end=mid-1;
        mid=start+(end-start)/2;
    }
    return ans;
}

int main() {
    vector<int> stalls({4, 2, 1, 3, 6});
    int k=2;

    int result = aggressiveCows(stalls, k);
    cout << result;
}