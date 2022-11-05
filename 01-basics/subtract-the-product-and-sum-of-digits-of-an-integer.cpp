// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer
#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int sum = 0, prod = 1;
    while (n != 0) {
        int rem = n % 10;
        sum += rem;
        prod *= rem;
        n /= 10;
    }
    
    int ans = prod - sum;
    cout << ans;
}

