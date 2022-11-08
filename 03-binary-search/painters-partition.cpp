// https://www.codingninjas.com/codestudio/problems/painter-s-partition-problem_1089557
#include <iostream>
#include <vector>
#include<algorithm>
#define ull unsigned long long
using namespace std;

bool isPossible(vector<ull> &boards, ull n, ull k, ull mid) {
    ull paullerCount = 1, areaPaulled = 0;
    for(ull i=0; i<n; i++) {
        areaPaulled+=boards[i];
        if(areaPaulled > mid) {
            paullerCount++;
            if(paullerCount > k || mid < boards[i]) return false;
            areaPaulled = boards[i];
        }
    }
    return true;
}

ull findLargestMinDistance(vector<ull> &boards, ull k)
{
    ull sum=0, start=0, n=boards.size();
    for(ull i=0; i<n; i++) sum+=boards[i];
    ull end=sum, ans=-1;
    ull mid=start+(end-start)/2;
    
    while(start<=end){
        if(isPossible(boards, n, k, mid)) {
            ans=mid;
            end=mid-1;
        } else start=mid+1;
        
        mid=start+(end-start)/2;        
    }
    return ans;
}

int main() {
    ull k=2;
    vector<ull> boards({10, 20, 30, 40});

    ull result = findLargestMinDistance(boards, k);
    cout << result;
}