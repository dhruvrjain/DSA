class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x),rev;
        rev=s;
        int i,j,n=s.length();
        i=0;j=n-1;
        char c;
        while(i<j){
            c=s[i];
            s[i]=s[j];
            s[j]=c;
            i++;
            j--;
        }
        if(!s.compare(rev))
        return true;
        return false;
    }
};