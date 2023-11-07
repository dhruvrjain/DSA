class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<float> time;
        int i,n=dist.size();
        for(i=0;i<n;i++){
            time.push_back((dist[i]*1.0)/speed[i]);
        }
        sort(time.begin(),time.end());
        int ans=1;
        for(i=1;i<n;i++){
            if(time[i]-i>0){
                ans++;
            }
            else{
                return ans;
            }
        }
        return n;
    }
};