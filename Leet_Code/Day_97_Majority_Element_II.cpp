class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num:nums){
            m[num]++;
        }
        int n=nums.size(),s;
        s=n/3;
        vector<int> ans;
        for(auto i:m){
            if(i.second>s){
                ans.push_back(i.first);
            }
        }
        return  ans;
    }
};