class Solution {
public:
    int maxPower(string s) {
        int pow=1,n=s.length(),i,j;
        i=j=0;
        while(i<n){
            if(j<n && s[i]==s[j]){
                j++;
            }
            else{
                if(pow<j-i)
                pow=j-i;
                i=j;
            }
        }
        return pow;
    }
};