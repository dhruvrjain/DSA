class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size(),i,j,m;
        i=0;j=n-1;
        while(i<=j){
            m=(i+j)/2;
            if(nums[m]==target)
            return m;
            if(nums[m]>target)
            j=m-1;
            else
            i=m+1;
        }
        if(target>nums[m])
        return m+1;
        return m;
    }
};