#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n,i,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cin>>k;
    for(i=k;i<n+k;i++)
    cout<<a[i%n]<<' ';
    return 0;
}