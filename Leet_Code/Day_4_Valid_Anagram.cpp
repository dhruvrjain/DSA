class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> a,b;
        int n=s.length(),m=t.length();
        if(n==m){
            for(int i=0;i<n;i++){
                a[s[i]]+=1;
                b[t[i]]+=1;
            }
            if(a==b)
            return true;
        }
        return false;
    }
};