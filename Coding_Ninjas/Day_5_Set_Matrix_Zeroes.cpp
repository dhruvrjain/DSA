#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int a[2],i,j,ti,tj,n=matrix.size(),m=matrix[0].size(),zn;
	vector<vector<int>> z;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(!matrix[i][j])
			{
				vector<int> a;
				a.push_back(i);a.push_back(j);
				z.push_back(a);
			}
		}
	}
	zn=z.size();
	unordered_map<int,int> i_flag,j_flag;
	for(int k=0;k<zn;k++){
		ti=z[k][0];
		tj=z[k][1];
		if(!i_flag[ti]){
		i_flag[ti]++;
		for(j=0;j<m;j++)
		matrix[ti][j]=0;
		}
		if(!j_flag[tj]){
		j_flag[tj]++;
		for(i=0;i<n;i++)
		matrix[i][tj]=0;
		}
	}
}