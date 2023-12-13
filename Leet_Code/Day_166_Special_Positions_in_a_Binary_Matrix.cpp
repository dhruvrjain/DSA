class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int i,j,m=mat.size(),n=mat[0].size();
        bool flag,pos;
        vector<int> rows,cols;
        for(i=0;i<m;i++){
            pos=false;
            flag=true;
            for(j=0;j<n;j++){
                if(mat[i][j]){
                   if(pos){
                       flag=false;
                       break;
                   }
                   pos=true;
                }
            }
            if(flag){
                rows.push_back(i);
            }
        }
        for(i=0;i<n;i++){
            pos=false;
            flag=true;
            for(j=0;j<m;j++){
                if(mat[j][i]){
                   if(pos){
                       flag=false;
                       break;
                   }
                   pos=true;
                }
            }
            if(flag){
                cols.push_back(i);
            }
        }
        int ans=0;
        for(int r:rows){
            for(int c:cols){
                if(mat[r][c]){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};