// https://leetcode.com/problems/power-of-two/
#include <math.h>
using namespace std;

// BEST SOLN (USING BIT MANIP)

int main () {
    int n;
    cout << "Enter any number: ";
    cin >> n;
    
    if (n <= 0) cout << "Invalid input";
    cout << n;
    
    if (n & (n-1)) cout << " is not a power of 2";
    else cout << " is a power of 2";
}

// ALTERNATE SOLN 
// int main () {
//     int n;
//     cout << "Enter any number: ";
//     cin >> n;

//     if (n <= 0) cout << "Invalid input";
//     for (int i = 0; i <= 30; i++) {
//         int ans = pow(2, i);

//         if (ans == n) cout << n << " is a power of 2";
//         if (ans > n) break;
//     }
//     cout << n << " is not a power of 2";
// }

// ALTERNATE SOLN
// int main () {
//     int n;
//     cout << "Enter any number: ";
//     cin >> n;
    
//     if (n <= 0) cout << "Invalid input";
//     cout << n;
//     while (n % 2 == 0) n /= 2;
//     if (n == 1) cout << " is a power of 2";
//     else cout << " is not a power of 2";
// }