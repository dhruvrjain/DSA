class Solution {
public:
    int reverse(int x) {
        int neg=0;
        if(x<0){
            neg=1;
            if(x==INT_MIN)
            return 0;
            x=-x;
        }
        int rev=0;
        while(x){
            if(rev*10.0+x%10>INT_MAX)
            return 0;
            rev=rev*10+x%10;
            x/=10;
        }
        if(neg)
        return -rev;
        return rev;
    }
};