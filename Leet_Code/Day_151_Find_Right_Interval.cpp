class Solution {
public:
    vector<pair<int,int>> start;
    int n;
    int search(int x){
        if(x>start[n-1].first) return -1;
        int i=0,j=n-1,m;
        while(i<=j){
            m=(i+j)/2;
            if(start[m].first==x) return start[m].second;
            if(start[m].first<x) i=m+1;
            else j=m-1;
        }
        if(start[i].first>x) return start[i].second;
        do{
            i++;
            if(start[i].first>x) return start[i].second;
        }while(i<n);
        return -1;
    }
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        n=intervals.size();
        int i;
        for(i=0;i<n;i++){
            start.push_back({intervals[i][0],i});
        }
        vector<int> ans;
        sort(start.begin(),start.end());
        for(auto v:intervals){
            ans.push_back(search(v[1]));
        }
        return ans;
    }
};