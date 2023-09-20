class Solution {
public:
    int minFlips(int a, int b, int c) {
        int f=0,b1,b2,b3;
        while(a||b||c){
            b1=a&1;
            b2=b&1;
            b3=c&1;
            if((b1|b2)!=b3){
                if(b1==b2){
                    if(b1==0)
                    f++;
                    else
                    f+=2;
                }
                else{
                    f++;
                }
            }
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return f;
    }
};