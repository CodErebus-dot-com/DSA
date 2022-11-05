// program to find element in an infinitely sorted array
#include <iostream>
using namespace std;

int findElement(int a[], int n, int k) {
    int s=0, e=1;
    

    while(k>a[e]) {
        s=e;
        e=2*e;
    }
    
    while(s<=e) {
        int m=s+(e-s)/2;

        if(a[m] == k) return m;
        else if(a[m]>k) e=m-1;
        else s=m+1;
    }
    return -1;
}

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
    int n=size(a);
    int k=27;

    int result=findElement(a,n,k);
    cout<<result;
}