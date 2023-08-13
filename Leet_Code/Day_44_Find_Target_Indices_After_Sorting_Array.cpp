class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int c=0,ind=0;
        for(auto n : nums){
            if(n<target)
            ind++;
            else if (n==target)
            c++;
        }
        vector<int> ans;
        for(int i=ind;i<ind+c;i++)
        ans.push_back(i);
        return ans;
    }
};