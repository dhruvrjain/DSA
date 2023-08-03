class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st,t;
        int destroyed=0;
        for(int a:asteroids){
            if(st.empty() || st.top()<0 || a>0){
                st.push(a);
            }
            else{
                while(!st.empty() && st.top()>0){
                    if(abs(a)==st.top()){
                        st.pop();
                        destroyed=1;
                        break;
                    }
                    if(abs(a)>st.top()){
                        st.pop();
                    }
                    else{
                        destroyed=1;
                        break;
                    }
                }
                if(!destroyed){
                    st.push(a);
                }
                destroyed=0;
            }
        }
        while(!st.empty()){
            t.push(st.top());
            st.pop();
        }
        vector<int> ans;
        while(!t.empty()){
            ans.push_back(t.top());
            t.pop();
        }
        return ans;
    }
};