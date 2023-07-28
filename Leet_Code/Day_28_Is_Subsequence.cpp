class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i,j,n=s.length(),m=t.length();
        i=j=0;
        while(i<n && j<m){
            if(s[i]==t[j])
            i++;
            j++;
        }
        if(i==n)
        return true;
        return false;
    }
};