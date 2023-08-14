class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
        return 0;
        int max=1,i,j,n=s.length();
        i=0;j=1;
        unordered_map<char,int> m;
        m[s[i]]++;
        while(j<n){
            if(m[s[j]]){
                while(m[s[j]]){
                    m[s[i++]]--;
                }
            }
            m[s[j]]++;
            if(j-i+1>max)
            max=j-i+1;
            j++;
        }
        return max;
    }
};