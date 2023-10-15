class Solution {
public:
    vector<string> ans;
    int n;
    string str;
    unordered_map<char,string> m;
    void add(int i,string com){
        if(i==n){
            ans.push_back(com);
            return;
        }
        for(char c:m[str[i]]){
            add(i+1,com+c);
        }
    }
    vector<string> letterCombinations(string digits) {
        n=digits.size();
        if(n==0)
        return {};
        int i;
        str=digits;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        add(0,"");
        return ans;
    }
};