class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> m;
        int i,j,tot,n=groupSizes.size();
        for(i=0;i<n;i++){
            m[groupSizes[i]].push_back(i);
        }
        vector<int> t;
        vector<vector<int>> ans;
        for(unordered_map<int,vector<int>>::iterator g=m.begin();g!=m.end();g++){
            i=0;
            tot=(g->second).size();
            for(j=1;j<=tot/g->first;j++){
                t={};
                while(i<j*g->first){
                    t.push_back(g->second[i++]);
                }
                ans.push_back(t);
            }
        }
        return ans;
    }
};