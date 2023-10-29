class Solution {
public:
    void sort(vector<string>& ns,int n){
        int i,j;
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1-i;j++){
                if(ns[j]+ns[j+1]<ns[j+1]+ns[j]){
                    swap(ns[j],ns[j+1]);
                }
            }
        }
    }
    string largestNumber(vector<int>& nums) {
        vector<string> ns;
        for(int num:nums){
            ns.push_back(to_string(num));
        }
        int n=ns.size(),i,j,k,f,l;
        sort(ns,n);
        string ans="";
        for(string s:ns){
            cout<<s<<" ";
            ans+=s;
        }
        if (ans[0]=='0') return "0";
        return ans;
    }
};