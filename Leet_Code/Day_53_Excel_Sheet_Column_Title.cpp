class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        int b=0;
        while(columnNumber>26){
            if(columnNumber%26-b){
                ans+=columnNumber%26+64-b;
                b=0;
            }
            else{
                ans+=90;
                b=1;
            }
            columnNumber/=26;
        }
        if(columnNumber-b)
        ans+=columnNumber+64-b;
        int i,j,n=ans.length();
        i=0;j=n-1;
        char c;
        while(i<j){
            c=ans[i];
            ans[i]=ans[j];
            ans[j]=c;
            i++;
            j--;
        }
        return ans;
    }
};