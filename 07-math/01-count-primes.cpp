// https://leetcode.com/problems/count-primes/
// https://www.codingninjas.com/codestudio/problems/all-prime-numbers_624970
#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
    long long count=0;
    vector<bool> isPrime(n+1, 1);
    
    for(long long i=2; i<=n; i++) {
        if(isPrime[i]) {
            count++;
            cout << i << " is a prime" << endl; 
            for(long long j=i*i; j<=n; j+=i) isPrime[j]=0;
        }
    }
    return count;
}

int main(){
    long long n;
    cin>>n;
    
    cout<<countPrimes(n);
}
