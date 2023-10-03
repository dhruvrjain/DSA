class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        int c=0;
        for(int num:nums){
            m[num]++;
        }
        for(auto i:m){
            if(i.second>1){
                c+=(i.second)*(i.second-1)/2;
            }
        }
        return c;
    }
};