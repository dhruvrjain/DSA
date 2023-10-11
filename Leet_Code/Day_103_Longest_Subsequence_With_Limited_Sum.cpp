class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> ans,sum;
        int i,j,t,n=nums.size();
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1-i;j++){
                if(nums[j]>nums[j+1]){
                    t=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=t;
                }
            }
        }
        sum.push_back(nums[0]);
        for(i=1;i<n;i++){
            sum.push_back(sum[i-1]+nums[i]);
        }
        for(int q:queries){
            i=0;
            while(i<n && sum[i]<=q) i++;
            ans.push_back(i);
        }
        return ans;
    }
};