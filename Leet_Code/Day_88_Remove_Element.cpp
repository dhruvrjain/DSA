class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size(),t,i,j;
        i=0;j=n-1;
        while(i<j){
            while(i<j && nums[j]==val) j--;
            while(i<j && nums[i]!=val) i++;
            if(i>=j)
            break;
            t=nums[i];
            nums[i]=nums[j];
            nums[j]=t;
        }
        j=0;
        for(int n:nums){
            if(n==val)
            j++;
        }
        return n-j;
    }
};