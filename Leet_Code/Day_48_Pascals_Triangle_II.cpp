class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        ans.push_back(1);
        int n=1,i,j;
        for(i=0;i<rowIndex;i++){
            for(j=n-1;j>0;j--){
                ans[j]+=ans[j-1];
            }
            ans.push_back(1);
            n++;
        }
        return ans;
    }
};