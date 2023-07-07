#include <bits/stdc++.h> 
int minElementsToRemove(vector<int> &arr)
{
	// Write your code here.
	unordered_map<int,int> v;
	int i,c=0,n=arr.size();
	for(i=0;i<n;i++){
		if(v[arr[i]]){
			c++;
		}
		v[arr[i]]++;
	}
	return c;
}