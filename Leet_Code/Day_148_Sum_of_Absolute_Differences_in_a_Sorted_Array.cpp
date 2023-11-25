class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> ans;
        int t,n=nums.size(),i,s1=0,s2=0;
        for(int num:nums){
            s2+=num;
        }
        for(i=0;i<n;i++){
            t=nums[i]*i-s1;
            s2-=nums[i];
            t+=s2-(n-i-1)*nums[i];
            ans.push_back(t);
            s1+=nums[i];
        }
        return ans;
    }
};