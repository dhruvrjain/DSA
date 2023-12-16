class Solution {
public:
    string multiply(string num1, string num2) {
        int i,j,k,cn1,cn2,prod,offset=0,carry,m=num1.length(),n=num2.length();
        string ans="",t,tp;
        if(num1=="0" || num2=="0") return "0";
        char c;
        for(i=n-1;i>-1;i--){
            cn1=num2[i]-'0';
            if(cn1){
                t="";
                carry=0;
                for(j=m-1;j>-1;j--){
                    cn2=num1[j]-'0';
                    prod=cn1*cn2+carry;
                    carry=prod/10;
                    c=prod%10+'0';
                    t=c+t;
                }
                if(carry){
                    c=carry+'0';
                    t=c+t;
                }
                carry=0;
                cout<<t;
                k=t.length()-1;
                for(j=ans.length()-1-offset;j>-1;j--){
                    prod=ans[j]+t[k]-96+carry;
                    carry=prod/10;
                    ans[j]=prod%10+'0';
                    k--;
                }
                j=k;
                while(j>=0){
                    prod=t[j]-'0'+carry;
                    carry=prod/10;
                    t[j]=prod%10+'0';
                    cout<<t<<endl;
                    j--;
                }
                if(carry){
                    c=carry+'0';
                    t=c+t;
                    k++;
                }
                tp="";
                for(j=0;j<=k;j++){
                    c=t[j];
                    tp+=c;
                }
                ans=tp+ans;
            }
            else{
                ans="0"+ans;
            }
            offset++;
        }
        return ans;
    }
};