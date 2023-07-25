class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(!str1.compare(str2))
        return str1;
        string ls,ss,ans,t="";
        int i,n=str1.length(),m=str2.length(),f=1,max,min,g;
        ls=(n>m)?str1:str2;
        ss=(n>m)?str2:str1;
        max=(n>m)?n:m;
        min=(n>m)?m:n;
        g=min;
        while((max%g || min%g))
            g--;
        for(i=0;i<g;i++)
            ans+=ls[i];
        for(i=0;i<(min/g);i++)
            t+=ans;
        if(t.compare(ss))
            return "";
        for(;i<(max/g);i++)
            t+=ans;
        if(t.compare(ls))
            return "";
        return ans;
    }
};