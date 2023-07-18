class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> t;
        t.push_back(1);
        ans.push_back(t);
        for(int i=1;i<numRows;i++)
        {
            t.push_back(0);
            for(int j=i;j>0;j--)
            t[j]+=t[j-1];
            ans.push_back(t);
        }
        return ans;
    }
};