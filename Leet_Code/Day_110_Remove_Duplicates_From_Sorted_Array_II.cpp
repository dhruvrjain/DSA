class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),k=0,i=0;
        while(i<n){
            if(i<n-1 && nums[i]==nums[i+1]){
                nums[k]=nums[k+1]=nums[i];
                k+=2;
                while(i<n-1 && nums[i]==nums[i+1]){
                    i++;
                }
                i++;
            }
            else{
                nums[k++]=nums[i++];
            }
        }
        return k;
    }
};