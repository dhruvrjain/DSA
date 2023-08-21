class Solution {
public:
    string countAndSay(int n) {
        string t,ans="1";
        char c;
        int count,i,j;
        for(i=1;i<n;i++){
            count=0;
            c=ans[0];
            t="";
            for(auto j: ans){
                if(j==c){
                    count++;
                }
                else{
                    t+=to_string(count);
                    t+=c;
                    count=1;
                    c=j;
                }
            }
            t+=to_string(count);
            t+=c;
            ans=t;
        }
        return ans;
    }
};