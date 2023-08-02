class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string,int> m;
        string s;
        int n=grid.size(),j,k,c=0;
        for(auto a:grid){
            s="";
            for(auto i: a){
                s+=to_string(i)+",";
            }
            m[s]++;
        }
        for(j=0;j<n;j++){
            s="";
            for(k=0;k<n;k++){
                s+=to_string(grid[k][j])+",";
            }
            if(m[s])
            c+=m[s];
        }
        return c;
    }
};