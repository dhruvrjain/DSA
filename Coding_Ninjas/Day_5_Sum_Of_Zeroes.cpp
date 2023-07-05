#include <bits/stdc++.h> 
int coverageOfMatrix(vector<vector<int>> &mat) {
    // Write your code here.
    int i,j,n=mat.size(),m=mat[0].size(),s=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(!mat[i][j])
            {
                if(j-1>-1 && mat[i][j-1])
                s++;
                if(i-1>-1 && mat[i-1][j])
                s++;
                if(j+1<m && mat[i][j+1])
                s++;
                if(i+1<n && mat[i+1][j])
                s++;
            }
        }
    }
    return s;
}
