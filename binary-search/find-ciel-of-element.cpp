// program to find the ciel of an element in a sorted array
#include <iostream>
#include <vector>
using namespace std;

int cielFinder(vector<int> v, int n, int k) {
    int s=0, e=n-1, f;

    while(s<=e) {
        int m=s+(e-s)/2;

        if(v[m] == k) return v[m];
        else if(v[m]>k) {
            f=m; 
            e=m-1;
        } else s=m+1;
    }
    return v[f];
}

int main() {
    vector<int> v({1,2,3,4,8,10,10,12,19});
    int n=v.size();
    int k=5;

    int result=cielFinder(v,n,k);
    cout<<result;
}