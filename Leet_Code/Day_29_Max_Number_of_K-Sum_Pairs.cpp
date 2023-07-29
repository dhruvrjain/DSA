class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int c=0;
        for(int p: nums){
            if(m[k-p]){
                c++;
                m[k-p]--;
            }
            else
            m[p]++;
        }
        return c;
    }
};