class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0,i,n=nums.size();
        for(i=1;i<n;i++){
            if(nums[i]!=nums[k]){
                k++;
                nums[k]=nums[i];
            }
        }
        return k+1;
    }
};