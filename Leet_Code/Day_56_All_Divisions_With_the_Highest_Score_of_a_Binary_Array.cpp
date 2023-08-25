class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int a[2]={0},n=nums.size();
        for(int e:nums){
            a[e]++;
        }
        int i,zc=0,oc=a[1],m=a[1];
        vector<int> divSum,ans;
        divSum.push_back(oc);
        for(i=0;i<n;i++){
            if(!nums[i]){
                zc++;
            }
            else{
                oc--;
            }
            if(oc+zc>m){
                m=oc+zc;
            }
            divSum.push_back(oc+zc);
        }
        for(i=0;i<=n;i++){
            if(divSum[i]==m){
                ans.push_back(i);
            }
        }
        return ans;
    }
};