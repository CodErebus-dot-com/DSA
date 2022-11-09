// https://leetcode.com/problems/minimized-maximum-of-products-distributed-to-any-store/
#include <iostream>
#include <vector>
using namespace std;

bool isValid(int n, vector<int>& quantities, int m) {
    int storeCount=0;
    for(int i=0; i<quantities.size(); i++) {
        if(m==0) return false;
        storeCount+=quantities[i]/m;
        if(quantities[i]%m) storeCount++;
        if(storeCount>n) return false;
    }
    return true;
}

int minimizedMaximum(int n, vector<int>& quantities) {
    int s=0, e=1e5, ans=-1;
    
    while(s<=e) {
        int m=s+(e-s)/2;
        if(isValid(n, quantities, m)) ans=m, e=m-1;
        else s=m+1;
    }
    return ans;
}

int main() {
    int n=7;
    vector<int> quantities({15,10,10});

    long long int result = minimizedMaximum(n, quantities);
    cout << result;
}