class Solution {
public:
    double myPow(double x, int n) {
        if(n==0 || x==1)
        return 1;
        long double ans=1;
        for(int i=1;i<=abs(n)/2;i++){
            ans*=x;
            if(i<=abs(n)/4)
            {
                ans*=ans;
                i*=2;
            }
        }
        ans*=ans;
        if(abs(n)%2)
        ans*=x;
        if(n<0)
        return 1/(ans);
        return ans;
    }
};