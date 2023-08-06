class Solution {
public:
    int findMin(vector<int>& nums) {
        int m,i,j,n=nums.size();
        if(n==1) return nums[0];
        i=0;j=n-1;
        while(i<j){
            m=(i+j)/2;
            if(nums[m]>nums[j])
            i=m+1;
            else
            j=m;
        }
        return nums[i];
    }
};