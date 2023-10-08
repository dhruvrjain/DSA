class Solution {
public:
    vector<int> a;
    int flag[10000]={0};
    int n;
    bool jump(int i){
        if(i>=n-1)
        return true;
        if(flag[i])
        return false;
        int j;
        for(j=i+a[i];j>=i+1;j--){
            if(jump(j))
            return true;
        }
        flag[i]=1;
        return false;
    }
    bool canJump(vector<int>& nums) {
        a=nums;
        n=nums.size();
        return jump(0);    
    }
};