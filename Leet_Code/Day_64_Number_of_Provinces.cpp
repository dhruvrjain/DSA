class Solution {
public:
    int *a,n;
    int ans=0;
    vector<vector<int>> nodes;
    void find(int i){
        while(i<n){
            if(a[i]){
                ans++;
                mark(i);
            }
            i++;
        }
    }
    void mark(int i){
        a[i]=0;
        for(int j=0;j<n;j++){
            if(a[j] && i!=j && nodes[i][j])
            {
                a[j]=0;
                mark(j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        nodes=isConnected;
        int i;
        n=isConnected.size();
        a=new int[n];
        for(i=0;i<n;i++) a[i]=1;
        find(0);
        return ans;
    }
};