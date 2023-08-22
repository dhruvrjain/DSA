class Solution {
public:
    int titleToNumber(string columnTitle) {
        int i,n=columnTitle.length(),colNum=0;
        i=n-1;
        while(i>-1){
            colNum+=(columnTitle[i]-'A'+1)*pow(26,n-1-i);
            i--;
        }
        return colNum;
    }
};