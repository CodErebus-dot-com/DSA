// https://leetcode.com/problems/complement-of-base-10-integer/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, ans = 0, i = 0;
    cout << "Enter any number: ";
    cin >> n;

    cout << "The ans is: ";
    if (n == 0) ans = 1;
    else {
        while (n) {
            int lastBit = n & 1;
            n = n >> 1;
            if (lastBit == 1) lastBit = 0;
            else lastBit = 1;
            ans += lastBit * pow (2, i);
            i++;
        }
    }
    cout << ans;
}

// ALTERNATE SOLN

// int main() {
//     int n, mask = 0, ans;
//     cout << "Enter any number: ";
//     cin >> n;

//     int m = n;
//     cout << "The ans is: ";
//     if (n == 0) ans = 1;
//     else {
//         while (m) {
//             mask = (mask << 1) | 1;
//             m = m >> 1;
//         }
//         ans = (~n) & mask;
//     }   
//     cout << ans;
// }
                