#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    // Write your code here.
    unordered_map<int,int> a;
    int i,min=1;
    for(i=0;i<n;i++)
    {
        a[arr[i]]=1;
    }
    while(true){
        if(!a[min])
        return min;
        min++;
    }
}