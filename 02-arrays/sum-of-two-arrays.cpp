// https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

// alternate solution
// vector<int> findArraySum(vector<int> a, int n, vector<int> b, int m) {
//     vector<int> ans;
    
//     int factor=0, num1=0, num2=0;
//     for(int i=0; i<n; i++) num1 = num1*10 + a[i];
//     for(int i=0; i<m; i++) num2 = num2*10 + b[i];
    
//     int temp=num1+num2;
//     while(temp>0) {
//         ans.push_back(temp%10);
//         temp=temp/10;
//     }
    
//     reverse(ans.begin(), ans.end());
//     return ans;
// }

vector<int> findArraySum(vector<int> a, int n, vector<int> b, int m) {
    vector<int> ans;
    
    int factor=0, num1=0, num2=0;
    for(int i=n-1; i>=0; i--) num1 += pow(10, factor++) * a[i];
    
    factor=0;
    for(int i=m-1; i>=0; i--) num2 += pow(10, factor++) * b[i];
    
    int temp = num1+num2;
    while(temp>0) {
        ans.push_back(temp%10);
        temp=temp/10;
    }
    
    reverse(ans.begin(), ans.end());
    return ans;
}

void printArr(vector<int> arr) {
    for(int i=0; i<arr.size(); i++) cout<<arr[i]<<" ";
}

int main() {
    vector<int> a({1,2,3,4});
    vector<int> b({6});
    int n=4,m=1;

    vector<int> result=findArraySum(a,n,b,m);
    printArr(result);
}