class Solution {
public:
    bool isPalindrome(string s) {
        int i,j,n=s.length(),t;
        string ns="",copy;
        for(i=0;i<n;i++){
            if((s[i]<=122 && s[i]>=97) || (s[i]<=57 && s[i]>=48) )
            ns+=s[i];
            else if(s[i]>=65 && s[i]<91)
            ns+=s[i]+32;
        }
        n=ns.length();
        copy=ns;
        i=0;
        j=n-1;
        while(i<j){
            t=copy[i];
            copy[i]=copy[j];
            copy[j]=t;
            i++;
            j--;
        }
        if(ns==copy) return true;
        return false;
    }
};