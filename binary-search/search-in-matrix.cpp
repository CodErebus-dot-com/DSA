// https://leetcode.com/problems/search-a-2d-matrix/
// https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix_1082556
// https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix-ii_1089637
// https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix_980531
#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row=0, col=matrix[0].size()-1, n=matrix.size();

    while(row<n && col>-1) {
        int curr=matrix[row][col];

        if(curr == target) return true;
        else if(curr > target) col--;
        else row++;
    }
    return false;
}

int main() {
    vector<vector<int>> matrix({{1,3,5,7},{10,11,16,20},{23,30,34,60}});
    int target=23;
    
    cout << searchMatrix(matrix, target);
}