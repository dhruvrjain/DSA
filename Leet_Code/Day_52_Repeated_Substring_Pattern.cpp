class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int i,j,n=s.length();
        if(n==1)
        return false;
        string t,rep;
        t="";
        for(i=0;i<n/2;i++){
            t+=s[i];
            if(n%(i+1)==0){
                rep="";
                for(j=0;j<n/(i+1);j++)
                rep+=t;
                if(rep.compare(s)==0)
                return true;
            }
        }
        return false;
    }
};