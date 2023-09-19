class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min1=INT_MAX,min2=INT_MAX;
        unordered_map<int,int> m;
        for(int i:prices){
            m[i]++;
            if(i<min1)
            min1=i;
        }
        if(m[min1]>1)
        min2=min1;
        else{
            for(int i:prices){
                if(i<min2 && i!=min1)
                min2=i;
            }
        }
        if(min1+min2<=money)
        return money-min1-min2;
        return money;
    }
};