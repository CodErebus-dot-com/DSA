// program to find the next letter to a given character in a sorted character array
#include <iostream>
#include <vector>
using namespace std;

char nextLetter(char v[], int n, int k) {
    int s=0, e=n-1, m, f;

    while(s<=e) {
        m=s+(e-s)/2;
        if(v[m]==k) return v[m+1];
        else if(v[m]>k) {
            f=m; 
            e=m-1;
        } else s=m+1;
    }
    return v[f];
}

int main() {
    char v[] = {'a', 'c', 'f', 'h'};
    int n=size(v);
    int k='b';

    char result=nextLetter(v,n,k);
    cout<<result;
}