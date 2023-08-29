class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i,max=1,n=piles.size(),sum=0;
        long c;
        for(auto num:piles){
            sum+=(num)/h;
            if(max<num)
            max=num;
        }
        if(!sum){
            sum++;
        }
        for(i=sum;i<max;i++){
            c=0;
            for(auto e:piles){
                c+=(e+i-1)/i;
            }
            if(c<=h)
            return i;
        }
        return max;
    }
};