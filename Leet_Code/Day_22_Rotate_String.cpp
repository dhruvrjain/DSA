class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        for(int i=0;i<n;i++){
            if(!s.compare(goal))
            return true;
            s=left(s,n);
        }
        return false;
    }
    string left(string s,int n){
        int i;
        char c=s[0];
        for(i=1;i<n;i++)
        s[i-1]=s[i];
        s[n-1]=c;
        return s;
    }
};