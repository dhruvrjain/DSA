class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        int c=0;
        while(n>0){
            if(n&1)
            break;
            c++;
            n>>=1;
        }
        if(n==1 && c%2==0)
        return true;
        return false;
    }
};