class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int m,f,l,n=nums.size(),i,j;
        i=0;
        j=n-1;
        while(i<=j){
            m=(i+j)/2;
            if(nums[m]==target){
                f=l=m;
                while(l<n-1 && nums[l+1]==target){
                    l++;
                }
                while(f>0 && nums[f-1]==target){
                    f--;
                }
                return {f,l};
            }
            if(nums[m]>target)
            j=m-1;
            else
            i=m+1;
        }
        return {-1,-1};
    }
};