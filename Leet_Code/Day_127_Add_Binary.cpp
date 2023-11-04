class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1,c,j=b.length()-1;
        string ans="";
        c=0;
        char t;
        while(i>=0 && j>=0){
            if(a[i]-48==0 && b[j]-48==0){
                ans=(c==0)?"0"+ans:"1"+ans;
                c=0;
            }
            else if(a[i]-48==1 && b[j]-48==1){
                ans=(c==0)?"0"+ans:"1"+ans;
                c=1;
            }
            else{
                t=((c^1)+48);
                ans=t+ans;
                c=c&1;
            }
            i--;
            j--;
        }
        if(i>=0){
            while(i>=0){
                if(c==0){
                    while(i>=0) ans=a[i--]+ans;
                    break;
                }
                t=((a[i]-48)^c)+48;
                ans=t+ans;
                c=(a[i]-48)&c;
                i--;
            }
        }
        if(j>=0){
            while(j>=0){
                if(c==0){
                    while(j>=0) ans=b[j--]+ans;
                    break;
                }
                t=((b[j]-48)^c)+48;
                ans=t+ans;
                c=(b[j]-48)&c;
                j--;
            }
        }
        if(c) ans="1"+ans;
        return ans;
    }
};