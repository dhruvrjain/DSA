class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for(char c:s){
            m[c]++;
        }
        int ans=0,odd=0;
        for(auto i:m){
            if(i.second%2){
                odd++;
            }
        }
        if(odd>0)
        odd-=1;
        return s.length()-odd;
    }
};