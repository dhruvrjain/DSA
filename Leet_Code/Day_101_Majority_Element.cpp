class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=INT_MIN,c=0;
        for(int n:nums){
            if(c==0){
                c=1;
                ans=n;
            }
            else{
                if(n==ans) c++;
                else c--;
            }
        }
        return ans;
    }
};