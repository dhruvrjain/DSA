class Solution {
public:
    int num;
    int s=0;
    vector<int> ans;
    void add(int i){
        if(i>num) return;
        for(int j=0;j<10;j++){
            if(i+j<=num){
                if(s==num)
                return;
                ans.push_back(i+j);
                s++;
                add((i+j)*10);
            }
            else{
                break;
            }
        }
    }
    vector<int> lexicalOrder(int n) {
        num=n;
        add(1);
        return ans;
    }
};