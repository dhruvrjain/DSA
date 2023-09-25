class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> sm,tm;
        for(char c:s){
            sm[c]++;
        }
        for(char c:t){
            tm[c]++;
        }
        for(char c:t){
            if(tm[c]!=sm[c])
            return c;
        }
        return 'a';
    }
};