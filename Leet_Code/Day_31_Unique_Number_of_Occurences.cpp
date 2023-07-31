class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> a;
        int n=0;
        unordered_set<int> s;
        for(int i: arr)
        a[i]++;
        for(unordered_map<int,int>::iterator i=a.begin();i!=a.end();i++){
            s.insert(i->second);
            n++;
        }
        if(n==s.size())
        return true;
        return false;
    }
};