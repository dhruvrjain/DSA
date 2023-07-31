class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int p[n],s[n];
        p[0]=0;
        s[n-1]=0;
        for(int i=1;i<n;i++)
        p[i]=nums[i-1]+p[i-1];
        for(int i=n-2;i>=0;i--)
        s[i]=s[i+1]+nums[i+1];
        for(int i=0;i<n;i++){
            if(p[i]==s[i])
            return i;
        }
        return -1;
    }
};