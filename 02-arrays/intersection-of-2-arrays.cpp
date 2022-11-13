// https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, m;

    vector<int> arr({1,2,2,2,3,4});
    vector<int> brr({2,2,3,3});
    n = arr.size();
    m = brr.size();
    // int *orr = new int(n+m);
    vector<int> orr;
    
    int i=0, j=0;
    while (i<n && j<m) {
        if(arr[i] == brr[j]) {
            orr.push_back(arr[i]); 
            i++;
            j++;
        } else if(arr[i] > brr[j]) j++;
        else i++;
    }

    if(orr.size() > 0){
        for(int i=0; i<orr.size(); i++) {
            cout << orr[i] << " ";
        }
    } else cout << -1;

    // o/p -> 2, 2, 3
}