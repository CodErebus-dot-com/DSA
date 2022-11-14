// https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028
#include<iostream>
#include<vector>
using namespace std;

// vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	
// }

int main(){
    int n = 6, K = 12;
    vector <int>arr({10, 5, 5, 5, 2});
    vector <vector<int>>ans;
    for (int i = 0; i < n; i++) {
        if (i != 0 && arr[i] == arr[i - 1]) continue;
        for (int j = i + 1; j < n; j++) {
          if (j != i + 1 && arr[j] == arr[j - 1]) continue;
          for (int k = j + 1; k < n; k++) {
            if (k != j + 1 && arr[k] == arr[k - 1]) continue;
            if (arr[i] + arr[j] + arr[k] == K) {
             ans.push_back({arr[i], arr[j], arr[k]});
            // cout << arr[i] << arr[j] << arr[k] <<endl;
           }
         }
       }
    }
    // return ans; // o/p -> 5 5 2
}
