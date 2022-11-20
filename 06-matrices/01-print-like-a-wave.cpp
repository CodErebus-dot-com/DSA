// https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268
#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> wave;
    bool flag=0;
    
    for(int i=0; i<mCols; i++) {
        if(!flag) {
            for(int j=0; j<nRows; j++) wave.push_back(arr[j][i]);
        } else {
            for(int j=nRows-1; j>=0; j--) wave.push_back(arr[j][i]);
        }
        flag=!flag;
    }
    return wave;
}

int main() {
    int n=3, m=4;
    vector<vector<int>> mat({{1,2,3,4},{5,6,7,8},{9,10,11,12}});
    vector<int> ans=wavePrint(mat, n, m);
    for(int i=0; i<n*m; i++) cout<<ans[i]<<" ";   
}