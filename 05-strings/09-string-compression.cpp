// https://leetcode.com/problems/string-compression/
// https://www.codingninjas.com/codestudio/problems/compress-the-string_526?leftPanelTab=0
#include <iostream>
#include <vector>
using namespace std;

string compress(vector<char> chars) {
    int ansInd=0, i=0, n=chars.size();
    string resultS;
    while(i<n) {
        int j=i+1;
        while(j<n && chars[i]==chars[j]) j++;
        resultS.push_back(chars[i]);
        // chars[ansInd++]=chars[i];
        
        int count=j-i;
        if(count>1) {
            string cnt=to_string(count);
            for(char ch: cnt) resultS.push_back(ch), ansInd++;
        }
        i=j;
    }
    // return resultS.length();
    return resultS;
}

int main() {
    vector<char> chars({'a','a','b','b','c','c','c'});
    cout<<compress(chars);
}