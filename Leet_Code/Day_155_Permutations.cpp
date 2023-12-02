class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int i,n=nums.size();
        if(nums.size()==1) return {nums};
        vector<int> temp=nums;
        vector<vector<int>> ans={},perm;
        for(i=0;i<n;i++){
            temp.erase(temp.begin()+i);
            perm=permute(temp);
            temp.insert(temp.begin()+i,nums[i]);
            for(auto v:perm){
                v.insert(v.begin(),temp[i]);
                ans.push_back(v);
            }
        }
        return ans;
    }
};