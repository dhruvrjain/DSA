class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size(),max=0,c=0,l=0;
        for(int i=0;i<n;i++){
            if(c<k || nums[i]==1){
                if(nums[i]==0)
                c++;
                if(i-l+1>max){
                    max=i-l+1;
                }
            }
            else{
                while(nums[l]) l++;
                l++;
            }
        }
        return max;
    }
};