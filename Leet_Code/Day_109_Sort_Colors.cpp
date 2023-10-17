class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ones=0,twos=0,zeroes=0,i,n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]==0) zeroes++;
            else if(nums[i]==1) ones++;
            else twos++;
        }
        i=0;
        while(zeroes--){
            nums[i++]=0;
        }
        while(ones--){
            nums[i++]=1;
        }
        while(twos--){
            nums[i++]=2;
        }
    }
};