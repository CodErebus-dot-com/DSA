// https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> reverseArray(vector<int> arr, int m) {
    int s=m+1, e=arr.size()-1;
    int temp;
    while(s<=e) {
        swap(arr[s], arr[e]);
        s++;
        e--; 
    }

    return arr;
}

void printArray(vector<int> arr) {
    for(int i=0; i<arr.size(); i++) cout<<arr[i] << " ";
}

int main() {
    vector<int> arr({1,2,3,4,5,6});
    int m=3;
    vector<int> result=reverseArray(arr, m);
    printArray(result);
}