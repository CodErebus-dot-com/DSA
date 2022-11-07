// https://leetcode.com/problems/koko-eating-bananas/
// https://practice.geeksforgeeks.org/problems/koko-eating-bananas/1?
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

bool isValid(int N, vector<int>& piles, int h, long long int m) {
    double hourCount=0;
    
    for(long long int i=0; i<N; i++) {
        hourCount+=ceil(piles[i]/double(m));
        if(hourCount>h) return false;
    }
    return true;
}

int minEatingSpeed(vector<int>& piles, int h) {
    long long int sum=0, N=piles.size();
    for(long long int i=0; i<N; i++) {
        sum+=piles[i];
    }
    
    long long int s=0, e=sum, ans=-1;
    while(s<=e) {
        long long int m=s+(e-s)/2;
        if(isValid(N, piles, h, m)) {
            ans=m;
            e=m-1;
        } else s=m+1;
    }
    return ans;
}

int main() {
    int h=8;
    vector<int> piles({3,6,7,11});

    long long int result = minEatingSpeed(piles, h);
    cout << result;
}