// https://practice.geeksforgeeks.org/problems/find-nth-root-of-m5843/1?
#include <iostream>
#include <math.h>
using namespace std;

int NthRoot(int n, int m) {
    // Code here.
    long long int s=1, e=m;
    
    if(m==1 || n==1) return m;
    while(s<=e) {
        long long int mid=s+(e-s)/2;
        double prod=pow(mid,n);
        
        if(prod==m) return mid;
        else if(prod>m) e=mid-1;
        else s=mid+1;
    }
    return -1;
}

int main() {
    int n=3, m=64;
    int result=NthRoot(n,m);
    cout<<result;
}