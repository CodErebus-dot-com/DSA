// https://leetcode.com/problems/spiral-matrix/
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int n=matrix.size(), m=matrix[0].size(), count=0, size=n*m;
    int startRow=0, endRow=n-1, startCol=0, endCol=m-1;
    vector<int> spiral;
    
    while(count<size) {
        for(int i=startCol; count<size && i<=endCol; i++) {
            spiral.push_back(matrix[startRow][i]);
            count++;
        }
        startRow++;
        
        for(int i=startRow; count<size && i<=endRow; i++) {
            spiral.push_back(matrix[i][endCol]);
            count++;
        }
        endCol--;
        
        for(int i=endCol; count<size && i>=startCol; i--) {
            spiral.push_back(matrix[endRow][i]);
            count++;
        }
        endRow--;
        
        for(int i=endRow; count<size && i>=startRow; i--) {
            spiral.push_back(matrix[i][startCol]);
            count++;
        }
        startCol++;
    }
    
    return spiral;
}

int main() {
    int n=3, m=4;
    vector<vector<int>> mat({{1,2,3,4},{5,6,7,8},{9,10,11,12}});
    vector<int> ans=spiralOrder(mat);
    for(int i=0; i<n*m; i++) cout<<ans[i]<<" ";   
}