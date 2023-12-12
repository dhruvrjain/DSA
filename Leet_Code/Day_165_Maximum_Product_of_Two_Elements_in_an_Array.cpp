class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m1,m2,i,n=nums.size();
        if(nums[0]>nums[1]){
            m1=nums[0];
            m2=nums[1];
        }
        else{
            m1=nums[1];
            m2=nums[0];
        }
        for(i=2;i<n;i++){
            if(nums[i]>m1){
                m2=m1;
                m1=nums[i];
            }
            else if(nums[i]>m2){
                m2=nums[i];
            }
        }
        return (m1-1)*(m2-1);
    }
};