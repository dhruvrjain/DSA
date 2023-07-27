class Solution {
public:
    int compress(vector<char>& chars) {
        int i,n=chars.size(),c,top=0;
        string t;
        i=0;
        c=0;
        while(i<n){
            while(i+c<n && chars[i+c]==chars[i]){
                c++;
            }
            chars[top++]=chars[i];
            if(c>1){
                t=s2i(c);
                for(int k=0;k<t.length();k++)
                chars[top++]=t[k];
            }
            i=i+c;
            c=0;
        }
        return top;
    }
    string s2i(int n){
        string s="";
        char c;
        while(n){
            s+=(n%10)+48;
            n/=10;
        }
        int i,j;
        n=s.length();
        i=0;j=n-1;
        while(i<j){
            c=s[i];
            s[i]=s[j];
            s[j]=c;
            i++;
            j--;
        }
        return s;
    }
};