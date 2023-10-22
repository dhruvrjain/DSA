class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min,ans=0,n=prices.size();
        min=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]<min){
                min=prices[i];
            }
            else{
                if(ans<prices[i]-min)
                ans=prices[i]-min;
            }
        }
        return ans;
    }
};