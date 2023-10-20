class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int c=1,f=0,i,n=nums.size();
        for(i=1;i<n;i++){
            if(nums[i]>nums[i-1] && f!=1){
                f=1;
                c++;
            }
            else if(nums[i]<nums[i-1] && f!=-1){
                f=-1;
                c++;
            }
        }
        return c;
    }
};