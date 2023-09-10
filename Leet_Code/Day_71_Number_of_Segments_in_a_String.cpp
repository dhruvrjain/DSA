class Solution {
public:
    int countSegments(string s) {
       int n=0;
       string t="";
       for(char c : s){
           if(c==' '){
               if(t.compare("")){
                   n++;
                   t="";
               }
           }
           else{
               t+=c;
           }
       }
       if(t.length())
       n++;
       return n; 
    }
};