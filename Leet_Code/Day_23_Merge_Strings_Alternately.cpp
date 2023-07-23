class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i,j,n=word1.length(),m=word2.length();
        i=0;
        string ans="";
        while(i<n && i<m){
            ans+=word1[i];
            ans+=word2[i];
            i++;
        }
        if(i<n){
            while(i<n)
            ans+=word1[i++];
        }
        else if(i<m){
            while(i<m)
            ans+=word2[i++];
        }
        return ans;
    }
};