// program to sort 0-1 arrays with 2pts algo (or sort in 1 traversal)
#include<iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 1, 0, 0, 0};
    int n = 6;

    int left=0, right=n-1;
    while(left < right) {
        if(arr[left] == 0) left++;
        else if(arr[right] == 1) right--;
        
        swap(arr[left],arr[right]);
        left++;
        right--;
    }

    for(int i=0; i<n; i++) {
        cout << arr[i];
    }
}