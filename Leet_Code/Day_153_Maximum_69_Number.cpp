class Solution {
public:
    int maximum69Number (int num) {
        int i=0,d=-1,n=num;
        while(num){
            if(num%10==6) d=i;
            i++;
            num/=10;
        }
        if(d>=0) n+=3*pow(10,d);
        return n;
    }
};