class Solution {
public:
    bool isValid(string s) {
        int top=-1,n=s.length();
        char a[n];
        for(char c : s){
            if(c=='(' || c=='[' || c=='{')
            a[++top]=c;
            else{
                if(top>=0 && c==')' && a[top]=='(')
                top--;
                else if(top>=0 && c==']' && a[top]=='[')
                top--;
                else if(top>=0 && c=='}' && a[top]=='{')
                top--;
                else return false;
            }
        }
        if(top==-1)
        return true;
        return false;
    }
};