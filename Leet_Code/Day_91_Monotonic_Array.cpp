class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return true;
        int i,id=-1;
        for(i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                if(id==1)
                return false;
                id=0;
            }
            else if(nums[i]<nums[i-1]){
                if(id==0)
                return false;
                id=1;
            }
        }
        return true;
    }
};