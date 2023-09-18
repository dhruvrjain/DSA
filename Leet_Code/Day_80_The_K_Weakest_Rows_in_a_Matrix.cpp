class Solution {
public:
    void swap(int* a,int* b){
        int t=*a;
        *a=*b;
        *b=t;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int i,j,s,m=mat.size();
        vector<int> ans,c;
        for(i=0;i<m;i++)
        ans.push_back(i);
        for(vector<int> row:mat){
            s=0;
            for(int sol:row){
                s+=sol;
            }
            c.push_back(s);
        }
        for(i=0;i<m-1;i++){
            for(j=0;j<m-i-1;j++){
                if(c[j]>c[j+1]){
                    swap(&c[j],&c[j+1]);
                    swap(&ans[j],&ans[j+1]);
                }
            }
        }
        if(k!=m){
            vector<int>::iterator p=ans.begin()+k;
            ans.erase(p,ans.end());
        }
        return ans;
    }
};