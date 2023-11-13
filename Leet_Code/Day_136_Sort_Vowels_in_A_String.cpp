class Solution {
public:
    string vs="";
    int part(int l,int h){
        char piv=vs[l],t;
        int i=l-1,j=h+1;
        while(true){
            do{
                i++;
            }while(vs[i]<piv);

            do{
                j--;
            }while(vs[j]>piv);
            if(i>=j) return j;
            t=vs[i];
            vs[i]=vs[j];
            vs[j]=t;
        }
    }
    void sort(int l,int h){
        if(l<h){
            int pi=part(l,h);
            sort(l,pi);
            sort(pi+1,h);
        }
    }
    bool isVowel(char c){
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
        return false;
    }
    string sortVowels(string s) {
        int i,f,n=s.length();
        for(char c:s){
            if(isVowel(c)) vs+=c;
        }
        sort(0,vs.length()-1);
        f=0;
        for(i=0;i<n;i++){
            if(isVowel(s[i])) s[i]=vs[f++];
        }
        return s;
    }
};