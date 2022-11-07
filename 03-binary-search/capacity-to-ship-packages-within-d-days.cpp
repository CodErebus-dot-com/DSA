// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

bool isValid(vector<int>& weights, int days, int mid) {
    int weightPerDay=0, dayCount=1;
    for(int i=0; i<weights.size(); i++) {
        weightPerDay+=weights[i];
        if(weightPerDay>mid) dayCount++, weightPerDay=weights[i];
        if(dayCount>days || weights[i]>mid) return false;
    }
    return true;
}

int shipWithinDays(vector<int>& weights, int days) {
    int s=0, e=0, minWeight=-1;
    for(int i=0; i<weights.size(); i++) {
        e+=weights[i];
    }
    
    while(s<=e) {
        int m=s+(e-s)/2;
        if(isValid(weights, days, m)) minWeight=m, e=m-1;
        else s=m+1;
    }
    return minWeight;
}

int main() {
    int days=5;
    vector<int> weights({1,2,3,4,5,6,7,8,9,10});

    long long int result = shipWithinDays(weights, days);
    cout << result;
}