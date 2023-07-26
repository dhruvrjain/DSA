class Solution {
public:
    string reverseVowels(string s) {
        int i,j,l=0,n=s.length();
        string vs="";
        char ch;
        for(char c: s){
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
            {
                vs+=c;
                l++;
            }
        }
        i=0;j=l-1;
        while(i<j){
            ch=vs[i];
            vs[i]=vs[j];
            vs[j]=ch;
            i++;
            j--;
        }
        j=0;
        for(i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                s[i]=vs[j++];
            }
        }
        return s;
    }
};