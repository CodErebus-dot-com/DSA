// program to find first one in an infinitely sorted binary array
#include <iostream>
using namespace std;

int findFirstOne(int a[], int n) {
    int s=0, e=1;
    while(a[e]<1){
        s=e;
        e=2*e;                                                                                                                                                                                                                                                                                                                                  
    }

    int i=-1;
    while(s<=e) {
        int m=s+(e-s)/2;
        if(a[m]==1) {
            i=m;
            e=m-1;
        }
        else s=m+1;
    }
    return i;
}

int main() {
    int a[] = {0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int n=size(a);

    int result=findFirstOne(a,n);
    cout<<result;
}