// https://www.codingninjas.com/codestudio/problems/merge-k-sorted-arrays_975379
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    vector<int> result;
    for(int i=0; i<k; i++){
        for(int j=0; j<kArrays[i].size(); j++){
            result.push_back(kArrays[i][j]);
        }
    }
    sort(result.begin(),result.end());
    return result;
}

void printArr(vector<int> arr) {
    for(int i=0; i<arr.size(); i++) cout<<arr[i]<<" ";
}

int main() {
    vector<vector<int>> kArrays({{2,4,6},{1,3,5,7,9}});
    int k=2;

    vector<int> result=mergeKSortedArrays(kArrays, k);
    printArr(result);
}