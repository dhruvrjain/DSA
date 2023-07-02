#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int i,f=0,m1,m2;
    if(n==1)
    return -1;
    m1=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]!=m1){
            f=1;
            if(m1>arr[i]){
                m2=arr[i];
            }
            else{
                m2=m1;
                m1=arr[i];
            }
            break;
        }
    }
    if(f){
        for(i=1;i<n;i++)
        {
            if(arr[i]>m2 && m1!=arr[i]){
                if(arr[i]>m1){
                    m2=m1;
                    m1=arr[i];
                } else {
                  m2 = arr[i];
                }
            }
        }
    }
    return ((f)?m2:-1);

}