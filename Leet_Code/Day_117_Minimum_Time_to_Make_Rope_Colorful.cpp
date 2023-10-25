class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int i,max,s,ans=0,n=colors.length();
        for(i=0;i<n-1;i++){
            if(colors[i]==colors[i+1]){
                s=max=neededTime[i];
                while(i<n-1 && colors[i]==colors[i+1]){
                    i++;
                    s+=neededTime[i];
                    if(max<neededTime[i]) max=neededTime[i];
                }
                ans+=s-max;
            }
        }
        return ans;
    }
};