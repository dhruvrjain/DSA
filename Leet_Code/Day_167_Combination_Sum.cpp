class Solution {
public:
    vector<int> cand;
    vector<vector<int>> ans;
    int t,n;
    void chk(int cs,vector<int> chosen,int pos){
        cs+=cand[pos];
        if(cs>t) return;
        chosen.push_back(cand[pos]);
        if(cs==t){
            ans.push_back(chosen);
            return;
        }
        for(int i=pos;i<n;i++){
            chk(cs,chosen,i);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        cand=candidates;
        t=target;
        n=cand.size();
        sort(cand.begin(),cand.end());
        for(int i=0;i<n;i++)
        chk(0,{},i);
        return ans;
    }
};