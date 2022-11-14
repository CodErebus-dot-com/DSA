// https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055
#include<iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 2, 1, 0};
    int n = 6;

    int left = 0, mid = 0, right = n-1;
    while(mid <= right) {
        if(arr[mid] == 0) {
            swap(arr[left], arr[mid]);
            left++;
            mid++;
        } else if(arr[mid] == 2) {
            swap(arr[mid], arr[right]);
            right--;
        } else mid++;

    }

    for(int i=0; i<n; i++) {
        cout << arr[i];
    }
}