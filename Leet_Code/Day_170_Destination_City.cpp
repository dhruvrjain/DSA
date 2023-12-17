class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,bool> p;
        for(auto i:paths){
            p[i[0]]=true;
        }
        for(auto i:paths){
            if(!p[i[1]]) return i[1];
        }
        return "";
    }
};
