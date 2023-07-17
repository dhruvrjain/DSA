#include <bits/stdc++.h> 
bool isPossible(int *a, int n)
{
    //  Write your code here.
    int i,j,f=0,na[n-1],top,ind;
    if(n<3)
    return true;
    for(i=1;i<n;i++){
      if (a[i] < a[i - 1]) {
          if(f)
          return false;
        if(i>1 && a[i]<a[i-2])
        a[i]=a[i-1];
        f++;
      }
    }
    return true;
}