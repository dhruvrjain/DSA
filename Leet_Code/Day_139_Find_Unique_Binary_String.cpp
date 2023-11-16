class Solution {
public:
    unordered_map<string,bool> m;
    int n,f=0;
    string ans;
    void chk(string s,int l){
        if(f) return;
        if(l==n){
            if(!m[s]){
                ans=s;
                f=1;
            }
            return;
        }
        l++;
        chk(s+"0",l);
        chk(s+"1",l);
    }
    string findDifferentBinaryString(vector<string>& nums) {
        n=nums.size();
        if(n==1){
            if(nums[0]=="0") return "1";
            return "0";
        }
        for(string s:nums){
            m[s]=true;
        }
        chk("",0);
        return ans;
    }
};