class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        stack<int> int_stack;
        string t,ans="";
        int n=s.length(),i=0,l;
        while(i<n){
            if(s[i]>'0' && s[i]<='9')
            {
                t="";
                while(s[i]>='0' && s[i]<='9')
                t+=s[i++];
                int_stack.push(stoi(t));
                continue;
            }
            else if(s[i]==']'){
                t="";
                while(st.top().compare("[")){
                    t=st.top()+t;
                    st.pop();
                }
                st.pop();
                ans="";
                l=int_stack.top();
                int_stack.pop();
                for(int j=0;j<l;j++){
                    ans+=t;
                }
                st.push(ans);
            }
            else{
                t="";
                t+=s[i];
                st.push(t);
            }
            i++;
        }
        ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
    int stoi(string s){
        int a=0;
        for(char c:s){
            a=a*10 + c-48;
        }
        return a;
    }
};