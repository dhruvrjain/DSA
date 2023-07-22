#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int i,b[3]={0},f=0;
   for(i=0;i<n;i++){
      b[arr[i]]++;
   }
   i=0;
   while(i<3){
      while(b[i]--){
         arr[f++]=i;
      }
      i++;
   }
}