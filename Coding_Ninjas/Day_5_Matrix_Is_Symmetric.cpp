#include <bits/stdc++.h> 
bool isMatrixSymmetric(vector<vector<int>> matrix){
    // Write your code here. 
    int i,j,n=matrix.size();
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(matrix[i][j]!=matrix[j][i])
            return false;
        }
    }
    return true;
}