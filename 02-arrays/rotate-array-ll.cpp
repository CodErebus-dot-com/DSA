// https://www.codingninjas.com/codestudio/problems/rotate-array-ll_4530285
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> rotateArrayTwo(int n, char d, int r, vector < int > & num) {
    // Write your code here.
    r%=n;
    reverse(num.begin(), num.end());
    if(d=='b') {
        reverse(num.begin(), num.begin()+n-r);
        reverse(num.begin()+n-r, num.end());
        
    } else if(d=='f') {
        reverse(num.begin(), num.begin()+r);
        reverse(num.begin()+r, num.end());    
    }
    return num;
}

void printArr(vector<int> arr) {
    for(int i=0; i<arr.size(); i++) cout<<arr[i]<<" ";
}

int main() {
    vector<int> num({1,2,3,4,5,6,7});
    int r=3, n=num.size(), d='b';

    vector<int> result=rotateArrayTwo(n, d, r, num);
    printArr(result);
}