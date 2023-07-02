#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {
    // Write your code here.
    int j,i,s1=0,s2=0,n=arr.size();
    for(j=1;j<n;j++)
        s2+=arr[j];
    for(i=0;i<n-1;i++)
    {
        if(s1==s2)
        return i;
        s1+=arr[i];
        s2-=arr[i+1];
    }
    if(i==n-1 && s1==s2)
    return i;
    return -1;
}