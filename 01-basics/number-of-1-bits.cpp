// https://leetcode.com/problems/number-of-1-bits/
#include <iostream>
using namespace std;

int main () {
    unsigned int n;
    int count = 0;
    cout << "Enter any number: ";
    cin >> n;

    while (n != 0) {
        if (n&1) {
            count++;
        }
        n = n >> 1;
    }
    cout << count;
}