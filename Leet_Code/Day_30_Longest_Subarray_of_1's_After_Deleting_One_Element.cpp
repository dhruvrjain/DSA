class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size(),i,c=0,max=0,l=0;
        for(i=0;i<n;i++){
            if(c==0 || nums[i]){
                if(nums[i]==0)
                c++;
                if(i-l+1>max)
                max=i-l+1;
            }
            else{
                while(nums[l]) l++;
                l++;
            }
        }
        return --max;
    }
};