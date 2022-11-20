// https://www.codingninjas.com/codestudio/problems/search-in-a-grid_983645
// https://leetcode.com/problems/search-a-2d-matrix-ii/
#include <iostream>
#include <vector>
using namespace std;

bool searchGrid(vector<vector<int>>& mat, int n, int m, int target)
{    
    // // Linear Search Soln
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<m; j++) {
    //         if(mat[i][j]==target) return 1;
    //     }
    // }
       
    // Binary Search Soln
    int start=0, end=m-1;
    while(start<n && end>-1) {
        int ref=mat[start][end];
        
        if(ref==target) return 1;
        else if(target>ref) start++;
        else end--;
    }
   
    return 0;
}

int main() {
    vector<vector<int>> matrix({{1,3,5,7},{10,11,16,20},{23,30,34,60}});
    int target=24, n=3, m=4;
    
    cout << searchGrid(matrix, n, m, target);
}