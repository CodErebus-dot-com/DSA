// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isValid(vector<int>& bloomDay, long long m, long long k, long long mid) {
    long long bouqCount=0, adj=0;
    for(long long i=0; i<bloomDay.size(); i++) {
        if(bloomDay[i]<=mid) adj++;
        else adj=0;
        
        if(adj==k) adj=0, bouqCount++;
        if(bouqCount==m) return true;
    }
    return false;
}

long long minDays(vector<int>& bloomDay, long long m, long long k) {
    long long s=0, e=*max_element(bloomDay.begin(), bloomDay.end()), ans=-1;
    
    if(m*k>size(bloomDay)) return -1;
    
    while(s<=e) {
        int mid=s+(e-s)/2;
        
        if(isValid(bloomDay, m, k, mid)) e=mid-1;
        else s=mid+1;
    }
    return s;
}

int main() {
    int m=3, k=1;
    vector<int> bloomDay({1,10,3,10,2});

    long long int result = minDays(bloomDay, m, k);
    cout << result;
}