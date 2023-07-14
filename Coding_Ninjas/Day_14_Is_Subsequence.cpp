#include <bits/stdc++.h> 
bool isSubSequence(string str1, string str2) {
    // Write your code here.
    int n=str1.size(),m=str2.size(),i,j;
    i=0;j=0;
    while(i<n && j<m){
        if(str1[i]==str2[j])
        {
            i++;
            j++;
        }
        else j++;
    }
    if(i==n)
    return true;
    return false;
}
