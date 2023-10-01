class Solution {
public:
    string reverseWords(string s) {
        int i,j,a,b,n=s.length();
        i=j=0;
        char c;
        while(i<n){
            while(j<n && s[j]!=' '){
                j++;
            }
            a=i;
            b=j-1;
            while(a<b){
                c=s[a];
                s[a++]=s[b];
                s[b--]=c;
            }
            i=j=j+1;
        }
        return s;
    }
};