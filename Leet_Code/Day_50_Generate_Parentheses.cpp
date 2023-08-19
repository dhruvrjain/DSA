class Solution {
public:
    vector<string> ans;
    int len;
    vector<string> generateParenthesis(int n) {
        len=n;
        generate("",0,0);
        return ans;
    }
    void generate(string s,int oc,int cc){
        if(oc==cc && cc==len)
        ans.push_back(s);
        if(oc<len)
        generate(s+"(",oc+1,cc);
        if(cc<oc)
        generate(s+")",oc,cc+1);
    }
};