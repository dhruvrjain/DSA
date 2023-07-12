class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> a,t;
        unordered_map<int,int> m;

        int i,prod=1,nzp=1,f,n=nums.size();
        for(i=0;i<n;i++){
            m[nums[i]]++;
        }
        int p[n],s[n];
        p[0]=1;
        for(i=1;i<n;i++){
            p[i]=(p[i-1]*nums[i-1]);
        }
        s[n-1]=1;
        for(i=n-2;i>-1;i--){
            s[i]=(s[i+1]*nums[i+1]);
        }
        for(i=0;i<n;i++)
        a.push_back(p[i]*s[i]);
        return a;
    }
};