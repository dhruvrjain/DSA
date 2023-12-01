class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string f="",s="";
        for(string ss:word1){
            f+=ss;
        }
        for(string ss:word2){
            s+=ss;
        }
        return f==s;
    }
};