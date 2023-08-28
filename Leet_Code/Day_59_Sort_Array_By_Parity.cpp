class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int t,ind,i,n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]%2)
            break;
        }
        ind=i;
        for(i=ind+1;i<n;i++){
            if(nums[i]%2==0){
                t=nums[i];
                nums[i]=nums[ind];
                nums[ind++]=t;
            }
        }
        return nums;
    }
};