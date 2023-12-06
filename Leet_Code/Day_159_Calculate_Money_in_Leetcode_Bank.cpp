class Solution {
public:
    int totalMoney(int n) {
        int t=n/7,m;
        int s=t*28;
        s+=(t*(t-1)/2)*7;
        m=n%7;
        s+=m*(m+1)/2;
        s+=m*(t);
        return s;
    }
};