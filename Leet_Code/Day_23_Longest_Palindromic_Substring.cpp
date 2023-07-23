class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length(),fl,fr,len=0,l=0,r;
        string ans="";
        for(int i=0;i<n;i++){
            r=l=i;
            while(r<n-1 && s[l]==s[r+1]) r++;
            while(1){
                if(l-1<0 || r+1>=n)
                break;
                if(s[l-1]==s[r+1])
                {
                    l--;r++;
                    continue;
                }
                break;
            }
            if(r-l+1>len){
                len=r-l+1;
                fl=l;
                fr=r;
            }
        }
        for(int i=fl;i<=fr;i++)
        ans+=s[i];
        return ans;
    }
};