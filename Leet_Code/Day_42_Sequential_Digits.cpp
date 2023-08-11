class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int num;
        vector<int> ans;
        char c='1';
        while(c<='9'){
            string s="";
            s+=c;
            for(int i=1;i<10-(c-48);i++){
                s+=c+i;
                num=stoi(s);
                if(num<=high && num>=low)
                ans.push_back(num);
                if(num>high)
                break;
            }
            c++;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};