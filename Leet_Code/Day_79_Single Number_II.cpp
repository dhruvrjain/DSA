class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,j,ans=0,t,n=nums.size();
        for(i=0;i<32;i++){
            t=0;
            for(j=0;j<n;j++){
                t+=nums[j]&1;
                nums[j]>>=1;
            }
            if(t%3)
            ans|=1<<i;
        }
        return ans;
    }
};