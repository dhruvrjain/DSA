class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size(),i;
        double avg,s=0;
        for(i=0;i<k;i++)
        s+=nums[i];
        avg=s/k;
        for(i=k;i<n;i++){
            s=s-nums[i-k]+nums[i];
            if(s/k>avg)
            avg=s/k;
        }
        return avg;
    }
};