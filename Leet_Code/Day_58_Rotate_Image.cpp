class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j,k,n=matrix.size(),t;
        for(i=0;i<n;i++){
            for(j=0;j<i;j++){
                t=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=t;
            }
        }
        for(i=0;i<n;i++){
            j=0;
            k=n-1;
            while(j<k){
                t=matrix[i][j];
                matrix[i][j]=matrix[i][k];
                matrix[i][k]=t;
                j++;
                k--;
            }
        }
    }
};