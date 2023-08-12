class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int i,j,m=obstacleGrid.size(),n=obstacleGrid[0].size();
        int a[m][n];
        for(i=0;i<n;i++){
            if(obstacleGrid[0][i]){
                a[0][i]=0;
                while(i<n){
                    a[0][i++]=0;
                }
                break;
            }
            a[0][i]=1;
        }
        for(i=0;i<m;i++){
            if(obstacleGrid[i][0]){
                while(i<m){
                    a[i++][0]=0;
                }
                break;
            }
            a[i][0]=1;
        }
        for(i=1;i<m;i++){
            for(j=1;j<n;j++){
                if(obstacleGrid[i][j])
                a[i][j]=0;
                else{
                    a[i][j]=a[i-1][j]+a[i][j-1];
                }
            }
        }
        return a[m-1][n-1];
    }
};