class Solution {
public:
    string intToRoman(int num) {
        string ans="",ref="MDCLXVI";
        vector<int> n={1000,500,100,50,10,5,1};
        int i=0,t,j;
        while(num){
            if(num<n[i]){
                i++;
                continue;
            }
            if(i==1 || i==3 || i==5)
            {
                if(num>=n[i]+4*n[i+1])
                {
                    num-=n[i]+4*n[i+1];
                    ans+=ref[i+1];
                    ans+=ref[i-1];
                }
                else{
                    ans+=ref[i];
                    num-=n[i];
                }
            }
            else{
                t=num/n[i];
                if(t<4){
                    for(j=0;j<t;j++)
                    ans+=ref[i];
                }
                else{
                    ans+=ref[i];
                    ans+=ref[i-1];
                }
                num-=t*n[i];
            }
        }
        return ans;
    }
};