// https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633
#include <iostream>
using namespace std;

bool checkSpecialChar(char s){
    return !(s>='a' && s<='z' || s>='0' && s<='9');
}

char toLowerCase(char s) {
    if(s>='A' && s<='Z') return s-'A'+'a';
    return s;
}

bool checkPalindrome(string s, int n)
{
    int j=n-1, i=0;
    while(i<=j) {
        char ch1=toLowerCase(s[i]), ch2=toLowerCase(s[j]);    
        
        if(checkSpecialChar(ch1)) {
            i++; 
            continue;
        } else if(checkSpecialChar(ch2)) {
            j--;
            continue;
        }  else if(ch1==ch2) i++,j--;
        else return 0;
    }
    return 1;
}

int main() {
    char s[]="N2 i&nJA?a& jnI2n";
    int n=sizeof(s);
    cout<<checkPalindrome(s, n);
}