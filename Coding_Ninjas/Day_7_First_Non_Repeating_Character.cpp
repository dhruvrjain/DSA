#include <bits/stdc++.h> 
char firstNonRepeatingCharacter(string str) {

  // Write your code here
  int i,n=str.length();
  unordered_map<char,int> m;
  for(i=0;i<n;i++)
  m[str[i]]++;
  for(i=0;i<n;i++)
  {
    if(m[str[i]]==1)
    return str[i];
  }
  return str[0];
}
