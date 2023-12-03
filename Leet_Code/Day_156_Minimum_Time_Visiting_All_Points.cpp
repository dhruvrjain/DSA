class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int i,n=points.size(),c=0,xdiff,ydiff;
        for(i=0;i<n-1;i++){
            xdiff=abs(points[i][0]-points[i+1][0]);
            ydiff=abs(points[i][1]-points[i+1][1]);
            c+=(xdiff>ydiff)?xdiff:ydiff;
        }
        return c;
    }
};