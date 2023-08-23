class Solution {
public:
    string reorganizeString(string s) {
        int i,j,n=s.length();
        map<char,int> m;
        char t;
        for(auto c: s){
            m[c]++;
            if(m[c]>(n+1)/2){
                return "";
            }
        }
        for(i=1;i<n;i++){
            if(s[i]==s[i-1]){
                j=i+1;
                while(j<n && s[i]==s[j]){
                    j++;
                }
                if(j<n){
                    t=s[i];
                    s[i]=s[j];
                    s[j]=t;
                }
            }
        }
        for(i=n-2;i>-1;i--){
            if(s[i]==s[i+1]){
                j=i-1;
                while(j>=0 && s[i]==s[j]){
                    j--;
                }
                if(j>=0){
                    t=s[i];
                    s[i]=s[j];
                    s[j]=t;
                }
            }
        }
        return s;
    }
};