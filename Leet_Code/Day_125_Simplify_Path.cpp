class Solution {
public:
    string simplifyPath(string path) {
        stack<char> s;
        int i,j,n=path.length();
        s.push('/');
        for(i=1;i<n;i++){
            if(path[i]=='/'){
                if(s.top()=='/') continue;
                s.push('/');
            }
            else if(path[i]=='.' && s.top()=='/'){
                j=i+1;
                while(j<n && path[j]=='.') j++;
                if(j-i<=2 && (j==n || path[j]=='/')){
                    if(j-i==2 && s.size()>1){
                        s.pop();
                        while(s.top()!='/') s.pop();
                    }
                }
                else{
                    while(i<j){
                        s.push('.');
                        i++;
                    }
                }
                i=j-1;
            }
            else s.push(path[i]);
        }
        if(s.size()>1 && s.top()=='/') s.pop();
        string ans="";
        while(!s.empty()){
            ans=s.top()+ans;
            s.pop();
        }
        return ans;
    }
};