class Solution {
public:
    int myAtoi(string s) {
        int n=s.length(),p=0,i=0,clamped=0;
        long int num=0;
        while(i<n && s[i]==' ' || s[i]=='-' || s[i]=='+')
        {
            if(s[i]=='-' || s[i]=='+'){
                if(s[i]=='-')
                p=1;
                i++;
                break;
            }
            i++;
        }
        while(i<n){
            if(s[i]>='0' && s[i]<='9'){
                num=(num*10+s[i]-48);
                if(num>INT_MAX){
                    num=INT_MAX;
                    clamped=1;
                    break;
                }                
            }
            else
            break;
            i++;
        }
        if(p){
            if(num==INT_MAX && clamped)
            num= -num-1;
            else
            num=-num;
        }
        return num;
    }
};