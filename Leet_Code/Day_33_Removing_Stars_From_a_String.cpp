class Solution {
public:
    string removeStars(string s) {
        int top=-1;
        for(char c: s){
            if(c=='*' && top>-1)
            top--;
            else
            s[++top]=c;
        }
        string t=s;
        s="";
        for(int i=0;i<=top;i++)
        s+=t[i];
        return s;
    }
};