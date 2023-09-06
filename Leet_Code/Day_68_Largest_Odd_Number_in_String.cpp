class Solution {
public:
    string largestOddNumber(string num) {
        int i,n=num.length();
        for(i=n-1;i>-1;i--){
            if((num[i]-48)&1){
                break;
            }
        }
        string ans="";
        for(int j=0;j<=i;j++){
            ans+=num[j];
        }
        return ans;
    }
};