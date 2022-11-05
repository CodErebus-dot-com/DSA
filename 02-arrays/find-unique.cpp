// https://www.codingninjas.com/codestudio/problems/find-unique_625159
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n%2 == 0) {
        cout << "Odd number of array elements allowed!";
    }

    int *arr = new int (n);
    for (int i=0; i<n-1; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    for (int i=0; i<n; i++) {
        ans = ans ^ arr[i];     
    }

    cout << ans;
}

// ALTERNATE SOLN

// int main() {
//     int n;
//     cin >> n;
//     if (n%2 == 0) {
//         cout << "Odd number of array elements allowed!";
//     }

//     int *arr = new int (n);
//     for (int i=0; i<n-1; i++) {
//         cin >> arr[i];
//     }

    
//     int count = 0, sum = 0;
//     for (int i=0; i<n; i++) {
//         for (int j=i+1; j<n; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//                 arr[i] = 0;
//                 arr[j] = 0;
//                 count = 0;
//             }
//         }
//     }

//     for(int i=0; i<n; i++) sum+=arr[i];

//     cout << sum;
// }