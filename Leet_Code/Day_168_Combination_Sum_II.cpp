class Solution {
public:
    vector<vector<int>> ans;
    vector<int> cand;
    unordered_map<string,bool> m;
    char c;
    int t,n;
    int sum(vector<int> l){
        int s=0;
        for(int i:l){
            s+=i;
        }
        return s;
    }
    void chk(int cs,vector<int> chosen,int pos,string str){
        cs+=cand[pos];
        if(cs>t) return;
        chosen.push_back(cand[pos]);
        c=48+cand[pos];
        str+=c;
        str+=",";
        if(m[str]) return;
        m[str]=true;
        if(cs==t){
            ans.push_back(chosen);
            return;
        }
        for(int i=pos+1;i<n;i++){
            chk(cs,chosen,i,str);
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        cand=candidates;
        t=target;
        n=cand.size();
        int s=sum(cand);
        if(s<t) return ans;
        sort(cand.begin(),cand.end());
        int i,prev=cand[0];
        chk(0,{},0,"");
        for(i=1;i<n;i++){
            while(i<n && cand[i]==prev) i++;
            if(i==n) break;
            prev=cand[i];
            chk(0,{},i,"");
        }
        return ans;
    }
};