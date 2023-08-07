class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l,r,mid,t,m=matrix.size(),n=matrix[0].size();
        l=0;
        r=m*n-1;
        while(l<=r){
            mid=(l+r)/2;
            t=matrix[mid/n][mid%n];
            if(t==target)
            return true;
            if(target>t)
            l=mid+1;
            else
            r=mid-1;
        }
        return false;
    }
};