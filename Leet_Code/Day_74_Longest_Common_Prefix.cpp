class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<int> n;
        for(string s:strs){
            n.push_back(s.length());
        }
        int i=0,j,size=strs.size();
        char t;
        while(true){
            if(i<n[0])
            t=strs[0][i];
            else break;
            for(j=1;j<size;j++){
                if(i>=n[j] || strs[j][i]!=t){
                    break;
                }
            }
            if(j!=size)
            break;
            i++;
        }
        string ans="";
        for(j=0;j<i;j++)
        ans+=strs[0][j];
        return ans;
    }
};