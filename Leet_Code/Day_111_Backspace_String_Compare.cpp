class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss,ts;
        for(char c:s){
            if(c=='#'){
                if(ss.empty()){
                    continue;
                }
                ss.pop();
            }
            else ss.push(c);
        }
        for(char c:t){
            if(c=='#'){
                if(ts.empty()){
                    continue;
                }
                ts.pop();
            }
            else ts.push(c);
        }
        if(ss==ts) return true;
        return false;
    }
};