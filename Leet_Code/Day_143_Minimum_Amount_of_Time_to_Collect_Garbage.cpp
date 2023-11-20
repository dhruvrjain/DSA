class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pi,mi,gi,i,n=garbage.size(),ans=0;
        pi=mi=gi=0;
        for(i=n-1;i>0;i--){
            if(!pi || !mi || !gi){
                for(char c:garbage[i]){
                    if(!pi && c=='P') pi=i;
                    if(!gi && c=='G') gi=i;
                    if(!mi && c=='M') mi=i;
                }
            }
            else{
                break;
            }
        }
        for(string g:garbage) ans+=g.length();
        for(i=0;i<pi;i++){
            ans+=travel[i];
        }
        for(i=0;i<gi;i++){
            ans+=travel[i];
        }
        for(i=0;i<mi;i++){
            ans+=travel[i];
        }
        return ans;
    }
};