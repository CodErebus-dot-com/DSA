// https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172
#include <iostream>
using namespace std;

// without extra variable
string replaceSpaces(string &str){
	for(int i=0; i<str.length(); i++) if(str[i]==' ') str.replace(i, 1, "@40");
    return str;
}

// with extra variable
// string replaceSpaces(string str){
//     string s="";
// 	for(int i=0; i<str.length(); i++) {
//         if(str[i]==' ') s.push_back('@'), s.push_back('4'), s.push_back('0');
//         else s.push_back(str[i]);
//     }
//     return s;
// }

int main() {
    string s="Coding Ninjas Is A Coding Platform";
    cout<<replaceSpaces(s);
}