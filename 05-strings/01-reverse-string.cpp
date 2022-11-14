// https://leetcode.com/problems/reverse-string/
#include <iostream>
using namespace std;

void reverseString(char name[], int n) {
    int j=n-1, i=0;
    while(i<=j) swap(name[i++], name[j--]);
    cout<<name;
}

int getLength(char name[]) {
    int count=0, i=0;
    while(name[i]!='\0') count++, i++;
    return count;
}

int main() {
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    int n=getLength(name);
    cout<<"Length of the name is: "<<n;
    cout<<endl;
    cout<<"Reverse of the name is: ";
    reverseString(name, n);
}