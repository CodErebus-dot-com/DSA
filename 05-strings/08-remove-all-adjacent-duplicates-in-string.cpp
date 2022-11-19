// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
#include <iostream>
using namespace std;

string removeDuplicates(string s) {
    for(int i=0; i<s.length(); i++) {
        if(s[i]==s[i+1]) {
            s.erase(i,2);
            if(i==0) i-=1;
            else i-=2;
        }
    }
    return s;
}

int main() {
    string s="abbaca";
    cout<<removeDuplicates(s);
}