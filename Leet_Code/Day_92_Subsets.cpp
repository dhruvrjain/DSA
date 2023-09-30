class Solution {
public:
    vector<vector<int>> ans;
    vector<int> arr;
    int n;
    void add(int i,vector<int> curr){
        curr.push_back(arr[i++]);
        ans.push_back(curr);
        while(i<n){
            add(i++,curr);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        n=nums.size();
        arr=nums;
        for(int i=0;i<n;i++)
        add(i,{});
        ans.push_back({});
        return ans;
    }
};