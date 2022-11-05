// program to find the minimum difference element in a sorted array
#include <iostream>
using namespace std;

int minDiff(int a[], int n, int k) {
    int s=0, e=n-1, ans=-1;

    while(s<=e) {
        int m=s+(e-s)/2;
        if(a[m]==k) return 0;
        else if(a[m]>k) e=m-1;
        else s=m+1;
    }

    int x=a[s]-k, y=a[e]-k;
    if(x<0) x*=-1;
    if(y<0) y*=-1;
    return x<y ? x : y;
}

int main() {
    int a[] = {1,3,8,12,15};
    int n=size(a);
    int k=12;

    int result=minDiff(a,n,k);
    cout<<result;
}