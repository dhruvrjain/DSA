class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int i,max=0,n=candies.size();
        for(i=0;i<n;i++)
        if(candies[i]>max)
        max=candies[i];
        vector<bool> ans;
        for(i=0;i<n;i++){
            if(candies[i]==max)
            ans.push_back(true);
            else if(candies[i]+extraCandies>=max)
            ans.push_back(true);
            else
            ans.push_back(false);
        }
        return ans;
    }
};