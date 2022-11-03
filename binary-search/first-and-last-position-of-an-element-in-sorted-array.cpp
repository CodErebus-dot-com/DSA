// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549
#include<vector>
using namespace std;

int firstOccurrence (vector<int>& arr, int n, int k) {
    int start=0, end=n-1;
    int mid = start + (end-start)/2;
    int firstIndex = -1;
    
    while(start<=end) {
        if(k == arr[mid]) {
            firstIndex = mid;
            end = mid-1;
        } else if(k < arr[mid]) end = mid-1;
        else start = mid+1;

        mid = start + (end-start)/2;
    }
    return firstIndex;
}

int lastOccurrence (vector<int>& arr, int n, int k) {
    int start=0, end=n-1;
    int mid = start + (end-start/2);
    int lastIndex = -1;

    while(start<=end) {
        if(arr[mid] == k) {
            lastIndex = mid;
            start = mid+1;
        } else if(k < arr[mid]) end = mid-1;
        else start = mid+1;

        mid = start + (end-start)/2;
    }
    
    return lastIndex;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOccurrence(arr, n, k);
    p.second = lastOccurrence(arr, n, k);

    return p;
}