class Solution {
public:
    int setBitCount(int n){
        int c=0;
        while(n){
            c+=n&1;
            n>>=1;
        }
        return c;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> np;
        for(int num:arr){
            np.push_back({setBitCount(num),num});
        }
        sort(np.begin(),np.end());
        arr={};
        for(auto n:np){
            arr.push_back(n.second);
        }
        return arr;
    }
};