class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int i,j,i2,j2,k,n=9;
        int t[n];
        char ch;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
            t[j]=0;
            for(j=0;j<n;j++){
                ch=board[i][j];
                if(ch!='.')
                t[ch-49]++;
            }
            for(j=0;j<n;j++)
            if(t[j]>1)
            return false;
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
            t[j]=0;
                for(j=0;j<n;j++){
                    ch=board[j][i];
                    if(ch!='.')
                    t[ch-49]++;
                }
                for(j=0;j<n;j++)
                if(t[j]>1)
                return false;
        }
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                for(k=0;k<n;k++)
                t[k]=0;
                for(i2=i*3;i2<i*3+3;i2++){
                    for(j2=j*3;j2<j*3+3;j2++){
                        ch=board[i2][j2];
                        if(ch!='.')
                        t[ch-49]++;
                    }
                }
                for(k=0;k<n;k++)
                if(t[k]>1)
                return false;
            }
        }
        return true;
    }
};