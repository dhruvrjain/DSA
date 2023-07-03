#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    // Write your code here.
    // pattern is the given string.
    int i,top=-1,n=pattern.length();
    char arr[n];
    for(i=0;i<n;i++){
        if(pattern[i]=='(')
        arr[++top]='(';
        else{
          if (top > -1) {
            if (arr[top] == '(')
              top--;
            else
            arr[++top]=')';
          }
          else
          arr[++top]=')';
        }
    }
    return top+1;
}