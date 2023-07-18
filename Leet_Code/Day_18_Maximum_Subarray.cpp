class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),max=0,cm=0;
        for(int i=0;i<n;i++){
            cm+=nums[i];
            if(cm>max)
            max=cm;
            if(cm<0)
            cm=0;
        }
        if(max==0){
            max=nums[0];
            for(int i=1;i<n;i++)
            if(nums[i]>max)
            max=nums[i];
        }
        return max;
    }
};