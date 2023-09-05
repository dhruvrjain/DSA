class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int i,n=cost.size(),ans=0;
        sort(cost.begin(),cost.end());
        for(i=0;i<n;i++){
            if(i%3==2){
                continue;
            }
            ans+=cost[n-1-i];
        }
        return ans;
    }
};