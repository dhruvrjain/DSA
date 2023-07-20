class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int,int> m;
        set<vector<int>> unique;
        int i,j,k,n=nums.size();
        for(i=0;i<n;i++)
        m[nums[i]]++;
        sort(nums.begin(),nums.end());
        for(i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1])
            continue;
            j=i+1;k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> a;
                    a.push_back(nums[i]);
                    a.push_back(nums[j]);
                    a.push_back(nums[k]);
                    unique.insert(a);
                    j++;
                    k--;
                }
                else if(-nums[i]<nums[j]+nums[k])
                k--;
                else j++;
            }
        }
        for(auto set: unique)
        ans.push_back(set);
        return ans;
    }
};