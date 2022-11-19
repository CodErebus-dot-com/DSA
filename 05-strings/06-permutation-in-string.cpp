// https://leetcode.com/problems/permutation-in-string/
// https://www.codingninjas.com/codestudio/problems/permutation-in-string_985363?leftPanelTab=0
#include <iostream>
using namespace std;

bool containsPermutation(int freqStr1[26], int freqStr2[26]) {
    for(int i=0; i<26; i++) if(freqStr1[i]!=freqStr2[i]) return 0;
    return 1;
}

bool checkInclusion(string s1, string s2) {
    int s1Freq[26]={0}, s2Freq[26]={0}, size1=s1.length(), size2=s2.length();
    
    for(int i=0; i<size1; i++) s1Freq[s1[i]-'a']++;
    
    int i=0;
    while(i<size1 && i<size2) s2Freq[s2[i++]-'a']++;
    if(containsPermutation(s1Freq, s2Freq)) return 1;
    
    while(i<size2) {
        s2Freq[s2[i]-'a']++;
        s2Freq[s2[i-size1]-'a']--;
        i++;
        if(containsPermutation(s1Freq, s2Freq)) return 1;
    }
    
    return 0;
}

int main() {
    string s1="ab", s2="eidbhaooo";
    cout<<checkInclusion(s1, s2);
}