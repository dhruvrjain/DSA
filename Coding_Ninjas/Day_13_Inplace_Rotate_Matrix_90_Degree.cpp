#include <bits/stdc++.h> 
void inplaceRotate(vector<vector<int>> &a)
{
    // Write your code here.
    int j,i,t,k,temp,q,n=a.size();
    for(k=0;k<n/2;k++){
        for(q=0;q<n-2*k-1;q++){
            i=j=k;
            temp=a[k][k];
            for(;j<n-k-1;j++)
            a[i][j]=a[i][j+1];
            for(;i<n-k-1;i++)
            a[i][j]=a[i+1][j];
            for(;j>k;j--)
            a[i][j]=a[i][j-1];
            for(;i>k;i--)
            a[i][j]=a[i-1][j];
            if(k+1<n-k)
            a[k+1][k]=temp;
        }
    }
}