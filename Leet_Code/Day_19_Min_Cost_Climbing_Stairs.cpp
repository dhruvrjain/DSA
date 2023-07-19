class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i,n=cost.size();
        if(n==2)
        return ((cost[0]>cost[1])?cost[1]:cost[0]);
        cost.push_back(0);
        for(i=2;i<=n;i++)
        cost[i]+=((cost[i-2]>cost[i-1])?cost[i-1]:cost[i-2]);
        return cost[n];
    }
};