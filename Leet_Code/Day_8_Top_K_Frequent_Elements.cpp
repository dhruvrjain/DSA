class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int i,j,n=nums.size(),t,vn;
        unordered_map<int,int> m;
        for(i=0;i<n;i++)
        m[nums[i]]++;
        vector<int> v,ans;
        for(unordered_map<int,int>:: iterator p=m.begin();p!=m.end();p++){
            v.push_back(p->second);
        }
        vn=v.size();
        for(i=0;i<vn-1;i++){
            for(j=0;j<vn-i-1;j++){
                if(v[j]<v[j+1]){
                    t=v[j];
                    v[j]=v[j+1];
                    v[j+1]=t;
                }
            }
        }
        for(i=0;i<k;i++){
            for(unordered_map<int,int>:: iterator p=m.begin();p!=m.end();p++){
                if(v[i]==p->second){
                ans.push_back(p->first);
                m[p->first]=0;
                break;
                }
            }
        }
        return ans;
    }
};