// https://practice.geeksforgeeks.org/problems/ceil-the-floor2802/1
#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    int s=0, e=n-1;
    sort(arr,arr+n);
    while(s<=e) {
        int m=s+(e-s)/2;
        
        if(arr[m] == x) return {arr[m],arr[m]};
        else if(arr[m] > x) e=m-1;
        else s=m+1;
    }
    
    return {e==-1 ? -1 : arr[e], s==n ? -1 : arr[s]};
}

int main() {
    int arr[] = {1,2,3,4,8,10,10,12,19};
    int n=size(arr);
    int k=9;

    pair<int,int> result=getFloorAndCeil(arr,n,k);
    cout<<result.first<<" "<<result.second;
}