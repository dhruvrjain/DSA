class Solution {
public:
    int countHomogenous(string s) {
        int n=s.length();
        long ans=0,i,j;
        for(i=0;i<n;i++){
            j=i;
            while(j<n && s[j]==s[i]){
                j++;
            }
            ans+=(j-i)&1?(j-i)*((j-i+1)/2):((j-i)/2)*(j-i+1);
            i=j-1;
        }
        return ans%1000000007;
    }
};