#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target){
	// Write your code here.
	int c=0;
	int l=0,r=n-1;
	while(l<r){
		if(arr[l]+arr[r]==target)
		{
			c++;
			l++;
			r--;
		}
		else if(arr[l]+arr[r]>target)
		r--;
		else l++;
	}
	if(c)
	return c;
	return -1;
}