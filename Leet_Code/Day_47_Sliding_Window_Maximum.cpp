class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size(),i=0,j,cm,cmi;
        vector<int> ans,t;
        j=k-1;
        t=max(nums,i,j);
        cm=t[0];
        cmi=t[1];
        ans.push_back(cm);
        i++;
        j++;
        while(j<n){
            if(cmi>=i){
                if(nums[j]>=cm){
                    cm=nums[j];
                    cmi=j;
                }
            }
            else{
                t=max(nums,i,j);
                cm=t[0];
                cmi=t[1];
            }
            ans.push_back(cm);
            i++;
            j++;
        }
        return ans;
    }
    vector<int> max(vector<int>& a,int i,int j){
        int m=-10001,mi;
        while(i<=j){
            if(a[i]>=m){
                m=a[i];
                mi=i;
            }
            i++;
        }
        return {m,mi};
    }
};