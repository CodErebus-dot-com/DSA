// https://leetcode.com/problems/reverse-integer/
#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cout << "Enter any number: ";
    cin >> n;

    cout << "The reverse of " << n << " is: ";
    while (n) {
        int rem = n % 10;
        n = n / 10;
        if(ans > INT_MAX/10 || ans < INT_MIN/10) return 0;
        ans = (ans * 10) + rem;
    }
    cout << ans;
}

