// https://leetcode.com/problems/maximum-candies-allocated-to-k-children/
#include <iostream>
#include <vector>
using namespace std;
    
bool isValid(vector<int>& candies, long long k, long long m) {
    long long childrenCount=0;
    if(m==0) return true;
    for(long long i=0; i<candies.size(); i++) {
        childrenCount+=candies[i]/m;
        if(childrenCount>=k) return true;
    }
    return false;
}

int maximumCandies(vector<int>& candies, long long k) {
    long long s=0, e=1e7, ans=0;

    while(s<=e) {
        long long m=s+(e-s)/2;
        if(isValid(candies, k, m)) ans=m, s=m+1;
        else e=m-1;
    }
    return ans;
}

int main() {
    int k=3;
    vector<int> candies({5,8,6});

    long long int result = maximumCandies(candies, k);
    cout << result;
}