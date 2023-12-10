class Solution {
public:
    vector<vector<int>> ans;
    int n,k;
    void add(vector<int> c,int l){
        if(l==k){
            ans.push_back(c);
            return;
        }
        c.push_back(0);
        l++;
        for(int i=c[l-2]+1;i<=n;i++){
            c[l-1]=i;
            add(c,l);
        }
    }
    vector<vector<int>> combine(int num, int a) {
        n=num;
        k=a;
        for(int i=1;i<=n;i++)
        add({i},1);
        return ans;
    }
};