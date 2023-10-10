class Solution {
public:
    int minOperations(string s) {
        char st,lt;
        if(s[0]=='0'){
            st='0';
            lt='1';
        }
        else{
            st='1';
            lt='0';
        }
        int n=s.length(),i,ans=0;
        for(i=0;i<n;i+=2){
            if(s[i]!=st)
            ans++;
        }
        for(i=1;i<n;i+=2){
            if(s[i]!=lt)
            ans++;
        }
        if(ans>n/2){
            ans=n-ans;
        }
        return ans;
    }
};