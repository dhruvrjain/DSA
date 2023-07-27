class Solution {
public:
    string reverseWords(string s) {
        int n=s.length(),i,j;
        string t,ans="";
        i=0;
        while(i<n){
            if(s[i]==' ')
            {
                i++;
                continue;
            }
            j=i+1;
            while(j<n && s[j]!=' ')
            j++;
            t="";
            for(int k=i;k<j;k++)
            t+=s[k];
            if(ans.compare("")==0)
            ans=t;
            else
            ans=t+" "+ans;
            i=j+1;
        }
        return ans;
    }
};