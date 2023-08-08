class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i,j,m,n=nums.size();
        i=0;j=n-1;
        while(i<=j){
            m=(i+j)/2;
            if(nums[m]==target)
            return m;
            if(nums[m]>target){
                if(target>=nums[i] || nums[i]>nums[m])
                j=m-1;
                else
                i=m+1;
            }
            else if(nums[m]<target)
            {
                if(target<=nums[j] || nums[j]<nums[m])
                i=m+1;
                else
                j=m-1;
            }
        }
        return -1;
    }
};