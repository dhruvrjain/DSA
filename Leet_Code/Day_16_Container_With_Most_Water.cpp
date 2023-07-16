class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0,area,i,j,n=height.size();
        i=0;
        j=n-1;
        while(i<j){
            if(height[i]<height[j]){
                area=(j-i)*height[i];
                i++;
            }
            else{
                area=(j-i)*height[j];
                j--;
            }
            if(ans<area)
            ans=area;
        }
        return ans;
    }
};