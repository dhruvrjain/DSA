class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int i,n=nums1.size(),m=nums2.size();
        unordered_map<int,int> n1,n2;
        vector<int> a,b;
        for(i=0;i<n;i++)
        n1[nums1[i]]++;
        for(i=0;i<m;i++)
        n2[nums2[i]]++;
        for(unordered_map<int,int>::iterator p=n1.begin();p!=n1.end();p++){
            if(!n2[p->first])
            a.push_back(p->first);
        }
        for(unordered_map<int,int>::iterator p=n2.begin();p!=n2.end();p++){
            if(!n1[p->first])
            b.push_back(p->first);
        }
        return {a,b};
    }
};