class Solution {
public:
    int part(vector<pair<char,int>>& cp,int low,int high){
        int pivot=cp[high].second;
        int j,i=low-1;
        pair<char,int> t;
        for(j=low;j<high;j++){
            if(cp[j].second>cp[high].second){
                i++;
                t=cp[i];
                cp[i]=cp[j];
                cp[j]=t;
            }
        }
        t=cp[high];
        cp[high]=cp[i+1];
        cp[i+1]=t;
        return i+1;
    }
    void sort(vector<pair<char,int>>& cp,int low,int high){
        if(low<high){
            int pi=part(cp,low,high);
            sort(cp,low,pi-1);
            sort(cp,pi+1,high);
        }
    }
    string frequencySort(string s) {
        unordered_map<char,int> m;
        int i,j,n=s.length();
        for(char c: s){
            m[c]++;
        }
        vector<pair<char,int>> cp;
        for(auto p:m){
            cp.push_back({p.first,p.second});
        }
        j=0;
        sort(cp,0,cp.size()-1);
        for(auto a:cp){
            for(i=0;i<a.second;i++) s[j++]=a.first;
        }
        return s;
    }
};