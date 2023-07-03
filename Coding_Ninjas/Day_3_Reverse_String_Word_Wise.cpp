#include <iostream>
#include <string.h>
using namespace std;

string substr(string s,int si,int ei){
    string ans="";
    for(int i=si;i<=ei;i++)
    ans+=s[i];
    ans.append(" ");
    return ans;
}

string reverseStringWordWise(string input)
{
    //Write your code here
    string ans="";
    int i,ei,si,n=input.length();
    si=ei=n-1;
    while(ei>0){
      if (si == 0 || input[si - 1] == ' ') {
        ans.append(substr(input, si, ei));
        si--;
        ei = si - 1;
        continue;
      }
      si--;
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}