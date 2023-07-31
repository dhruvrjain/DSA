class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a=0,s=0;
        for(int i : gain){
            s+=i;
            if(s>a)
            a=s;
        }
        return a;
    }
};