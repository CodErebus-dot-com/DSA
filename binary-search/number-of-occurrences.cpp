// https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1?
#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int x) {
    int s=0, e=n-1, index=-1;
    while(s<=e) {
        int m=s+(e-s)/2;
        if(arr[m]==x) {
            index=m;
            e=m-1;
        } else if(arr[m]>x) e=m-1;
        else s=m+1;
    }
    return index;
}

int lastOcc(int arr[], int n, int x) {
    int s=0, e=n-1, index=-1;
    while(s<=e) {
        int m=s+(e-s)/2;
        if(arr[m]==x) {
            index=m;
            s=m+1;
        } else if(arr[m]>x) e=m-1;
        else s=m+1;
    }
    return index;
}

int count(int arr[], int n, int x) {
    int last=lastOcc(arr,n,x);
    int first=firstOcc(arr,n,x);
    if(last==-1 && first==-1) return 0;
    return last-first+1;
}

int main() {
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n=size(arr), x=2;
    cout<<count(arr,n,x);
}