// https://www.codingninjas.com/codestudio/problems/ayush-and-ninja-test_1097574 - CHAPTERS ALLOCATION
#include <iostream>
#include <vector>
#include<algorithm>
#define ull unsigned long long
using namespace std;

bool isPossible(ull n, ull m, vector<ull> time, ull mid) {
    ull timeSum=0, dayCount=1;
    for(ull i=0; i<n; i++) {
        if(timeSum+time[i]<=mid) timeSum+=time[i];
        else {
            dayCount++;
            if(dayCount>m || time[i]>mid) return false;
            timeSum=time[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(ull n, ull m, vector<ull> time) {	
    ull start=0, end=0, ans=-1;
    for(ull i=0; i<n; i++) {
        end+=time[i];
    }

    while(start<=end) {
        ull mid = start+(end-start)/2;
        if(isPossible(n, m, time, mid)) {
            ans = mid;
            end = mid-1;
        } else start = mid+1;
    }
    
    return ans;
}

int main() {
    ull n, m;
    cin >> m >> n;

    vector<ull> time(n);
    for(int i=0; i<n; i++) {
        cin >> time[i];
    }

    ull result = ayushGivesNinjatest(n, m, time);
    cout << result;
}