// https://leetcode.com/problems/rotate-image/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>> matrix) {
    int n=matrix.size();
    int m=matrix[0].size();

    for (int i=0; i<n; i++){
        for(int j=0; j<i; j++) swap(matrix[i][j], matrix[j][i]);
    }
    
    for(int i=0; i<n; i++)  reverse(matrix[i].begin(),matrix[i].end());

    // printing
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}

int main() {
    int n=3, m=3;
    vector<vector<int>> mat({{1,2,3},{4,5,6},{7,8,9}});
    rotate(mat);
}