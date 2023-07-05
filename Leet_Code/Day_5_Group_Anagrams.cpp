class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<unordered_map<char,int>> strmaps;
        vector<vector<string>> ans;
        int n=strs.size();
        int a[n],i,j;
        for(i=0;i<n;i++){
            a[i]=0;
        }
        for(string s : strs){
            strmaps.push_back(charMap(s));
        }
        for(i=0;i<n;i++){
            if(!a[i]){
                a[i]=1;
                vector<string> grp;
                grp.push_back(strs[i]);
                for(j=i+1;j<n;j++){
                    if(!a[j] && strmaps[i]==strmaps[j])
                    {
                        a[j]=1;
                        grp.push_back(strs[j]);
                    }
                }
                ans.push_back(grp);
            }
        }
        return ans;
    }
    unordered_map<char,int> charMap(string s){
        unordered_map<char,int> ans;
        int n=s.length();
        for(int i=0;i<n;i++)
        ans[s[i]]++;
        return ans;
    }
};