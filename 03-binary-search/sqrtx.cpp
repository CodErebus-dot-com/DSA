// https://leetcode.com/problems/sqrtx
// https://www.codingninjas.com/codestudio/problems/square-root_893351
#include<iostream>
using namespace std;

 long long int sqrtInteger(int n) {        
    long long int start=0, end=(n > 1e9 ? 1e9/2 : n/2);
    long long int sqrt=-1;
    
    if(n==1) return 1;
    while(start<=end) {
        long long int mid=start+(end-start)/2;
        long long int square=mid*mid;
        
        if(square==n) return mid;
        else if(square<n) {
            sqrt=mid;
            start=mid+1;
        }
        else end=mid-1;
    }
    return sqrt;
}

double morePrecision(int n, int precision, double ans) {
    double factor = 1;

    for(int i = 1; i <= precision; i++) {
        factor /= 10;
        for(double j = ans; j*j < n; j = j+factor) {
            ans=j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    double ans = sqrtInteger(n);
    cout <<" Answer is " << morePrecision(n, 3, ans) << endl;
    return 0;
}