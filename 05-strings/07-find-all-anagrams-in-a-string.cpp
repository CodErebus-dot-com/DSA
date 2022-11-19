// https://leetcode.com/problems/find-all-anagrams-in-a-string/
#include <iostream>
#include <vector>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    vector<int> pFreq(26,0), sFreq(26,0);
    int sSize = s.length(), pSize = p.length();
    
    // if pattern larger than original string
    if(sSize<pSize) return {};
    
    int i=0;
    // freq of chars in pattern and a window (from the original string) of pSize1 (pattern length)
    while(i<pSize) sFreq[s[i]-'a']++, pFreq[p[i++]-'a']++;

    vector<int> ans;
    // intial freq comparison (push 0th index)
    if(pFreq == sFreq) ans.push_back(0);
    
    // NOTE: i here starts with a value of pSize+1 as in the while loop we are incrementing i
    while(i<sSize) {
        // decrease the freq of the old char
        sFreq[s[i-pSize] - 'a']--;
        // increase the freq of the new char
        sFreq[s[i++] - 'a']++;
        if(pFreq == sFreq) ans.push_back(i-pSize);
    }
    return ans;
}

int main() {
    string s="cbaebabacd", p="abc";
    vector<int> result;
    result=findAnagrams(s, p);
    for(int i=0; i<result.size(); i++) cout<<result[i]<<" ";
}