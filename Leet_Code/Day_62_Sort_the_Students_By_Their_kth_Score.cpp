class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<int> t;
        int m=score.size(),i,j;
        for(i=0;i<m-1;i++){
            for(j=0;j<m-1-i;j++){
                if(score[j][k]<score[j+1][k]){
                    t=score[j];
                    score[j]=score[j+1];
                    score[j+1]=t;
                }
            }
        }
        return score;
    }
};