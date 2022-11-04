// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549
#include<vector>
#include<iostream>
using namespace std;

int firstOccurrence(vector <int>arr, int n, int k){
    int start=0, end=n, ans=-1;
    while(start<=end) {
        int mid=start+(end-start)/2;
        if(arr[mid] == k) {
            ans=mid;
            end=mid-1;
        } else if(arr[mid]>k) end=mid-1;
        else start=mid+1;
    }
    return ans;
}

int lastOccurrence(vector <int>arr, int n, int k){
    int start=0, end=n, ans=-1;
    while(start<=end) {
        int mid=start+(end-start)/2;
        if(arr[mid] == k) {
            ans=mid;
            start=mid+1;
        } else if(arr[mid]>k) end=mid-1;
        else start=mid+1;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOccurrence(arr, n, k);
    p.second = lastOccurrence(arr, n, k);

    return p;
}

int main() {
    vector<int> arr({1, 2, 2, 2, 2, 3, 4, 7, 8, 8 });
    int n=10, k=8;
    pair<int,int>result = firstAndLastPosition(arr, n, k);
    cout<<result.first << " " << result.second << endl;

    // program to find the frequency of an element
    int frequency = result.second-result.first+1;
    cout<< frequency;
}