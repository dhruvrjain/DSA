class Solution {
public:
    int mySqrt(int x) {
        if(x<=1) return x;
        int i=0,j=x,m;
        while(true){
            if(j-i==1) return i;
            m=(i+j)/2;
            if(m==x/m) return m;
            else if(m<x/m) i=m;
            else j=m;
        }
    }
};