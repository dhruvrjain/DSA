class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=-1,i,t,n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]){
                if(l==-1)
                continue;
                nums[l]=nums[i];
                nums[i]=0;
                l++;
            }
            else{
                if(l==-1)
                l=i;
            }
        }
    }
};