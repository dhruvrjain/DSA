class Solution {
public:
    bool checkStrings(string s1, string s2) {
        unordered_map<char,int> s1o,s1e,s2o,s2e;
        int i,n=s1.length();
        for(i=0;i<n;i+=2)
        {
            s1e[s1[i]]++;
            s2e[s2[i]]++;
        }
        for(i=1;i<n;i+=2)
        {
            s1o[s1[i]]++;
            s2o[s2[i]]++;
        }
        if(s1o==s2o && s1e==s2e)
        return true;
        return false;
    }
};