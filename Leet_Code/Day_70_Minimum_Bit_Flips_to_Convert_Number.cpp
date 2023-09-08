class Solution {
public:
    int minBitFlips(int start, int goal) {
        int c=0,x=start^goal;
        while(x){
            if(x&1)
            c++;
            x>>=1;
        }
        return c;
    }
};