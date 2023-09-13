class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
        return s;
        vector<string> v;
        int i,f=1;
        for(i=0;i<numRows;i++){
            v.push_back("");
        }
        i=0;
        for(char c:s){
            v[i]+=c;
            if(i==0 && f==0){
                f=1;
            }
            else if(i==numRows-1){
                f=0;
            }
            if(f){
                i++;
            }
            else{
                i--;
            }
        }
        string ans="";
        for(string t:v){
            ans+=t;
        }
        return ans;
    }
};