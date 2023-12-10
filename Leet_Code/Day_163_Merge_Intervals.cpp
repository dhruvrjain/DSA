class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int f,i,j,n=intervals.size();
        vector<int> mark(n,0);
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        for(i=0;i<n;i++){
            if(mark[i]==0){
                for(j=i+1;j<n;j++){
                    if(mark[j]==0){
                        if(intervals[i][1]>=intervals[j][0] && intervals[i][1]<=intervals[j][1]){
                            mark[j]=1;
                            intervals[i][0]=min(intervals[i][0],intervals[j][0]);
                            intervals[i][1]=max(intervals[i][1],intervals[j][1]);
                        }
                        else if(intervals[j][1]>=intervals[i][0] && intervals[i][1]>=intervals[j][1]){
                            mark[j]=1;
                            intervals[i][0]=min(intervals[i][0],intervals[j][0]);
                            intervals[i][1]=max(intervals[i][1],intervals[j][1]);
                        }
                    }
                }
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};