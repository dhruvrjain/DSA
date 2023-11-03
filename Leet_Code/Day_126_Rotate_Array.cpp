class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size(),i;
        if(k>=n) k=k%n;
        vector<int> ans;
        for(i=n-k;i<n;i++) ans.push_back(nums[i]);
        for(i=0;i<n-k;i++) ans.push_back(nums[i]);
        nums=ans;
    }
};