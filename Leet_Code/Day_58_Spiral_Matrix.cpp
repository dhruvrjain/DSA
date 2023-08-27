class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i,j,n=matrix.size(),m=matrix[0].size(),c=0;
        int tot=n*m;
        vector<int> ans;
        for(int k=0;k<(n+1)/2;k++){
            i=j=k;
            for(;j<m-k-1;j++){
                ans.push_back(matrix[i][j]);
                c++;
                if(c==tot)
                {
                    return ans;
                }
            }
            for(;i<n-k-1;i++){
                ans.push_back(matrix[i][j]);
                c++;
                if(c==tot)
                {
                    return ans;
                }
            }
            for(;j>k;j--){
                ans.push_back(matrix[i][j]);
                c++;
                if(c==tot)
                {
                    return ans;
                }
            }
            for(;i>k;i--){
                ans.push_back(matrix[i][j]);
                c++;
                if(c==tot)
                {
                    return ans;
                }
            }
        }
        if(c<n*m)
        ans.push_back(matrix[i][j]);
        return ans;
    }
};