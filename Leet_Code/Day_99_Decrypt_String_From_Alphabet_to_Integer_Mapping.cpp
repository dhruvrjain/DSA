class Solution {
public:
    string freqAlphabets(string s) {
        int n=s.length();
        int i;
        string ans="";
        char c;
        for(i=n-1;i>=0;i--){
            if(s[i]=='#'){
                c=(s[i-1]-48+(s[i-2]-48)*10+96);
                i-=2;
            }
            else{
                c=(s[i]-48+96);
            }
            ans=c+ans;
        }
        return ans;
    }
};