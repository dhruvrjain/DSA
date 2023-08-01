class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int w1=word1.length(),w2=word2.length();
        if(w1!=w2)
        return false;
        unordered_map<char,int> m1,m2;
        for(char c:word1)
        m1[c]++;
        for(char c:word2)
        m2[c]++;
        vector<int> occ1,occ2;
        vector<char> cl1,cl2;
        for(unordered_map<char,int>::iterator i=m1.begin();i!=m1.end();i++){
            occ1.push_back(i->second);
            cl1.push_back(i->first);
        }
        for(unordered_map<char,int>::iterator j=m2.begin();j!=m2.end();j++){
            occ2.push_back(j->second);
            cl2.push_back(j->first);
        }
        sort(occ1.begin(),occ1.end());
        sort(occ2.begin(),occ2.end());
        sort(cl1.begin(),cl1.end());
        sort(cl2.begin(),cl2.end());
        if(occ1==occ2 && cl1==cl2)
        return true;
        return false;
    }
};