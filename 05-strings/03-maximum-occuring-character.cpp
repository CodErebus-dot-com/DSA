// https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
#include <iostream>
using namespace std;

char getMaxOccuringChar(string str) {
    int alpha[26]={0};
    for(int i=0; i<str.size(); i++) {
        if(str[i]>='A' && str[i]<='Z') str[i]=str[i]-'A'+'a';
        alpha[str[i]-'a']++;
    }
    
    int maxValue=-1, ans=0;
    for(int i=0; i<26; i++) {
        if(maxValue<alpha[i]) maxValue=alpha[i], ans=i;
    }
    
    return ans+'a';
}
    
int main() {
    string s="tttZZzz";
    cout<<getMaxOccuringChar(s);
}