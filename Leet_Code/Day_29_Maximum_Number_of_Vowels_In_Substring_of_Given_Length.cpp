class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.length(),i,vc=0,max;
        vector<int> isvow=isVowel(s);
        for(i=0;i<k;i++)
        vc+=isVowel(s[i]);
        max=vc;
        for(i=k;i<n;i++){
            vc=vc+isVowel(s[i])-isVowel(s[i-k]);
            cout<<vc<<endl;
            if(vc>max)
            max=vc;
        }
        return max;
    }
    vector<int> isVowel(string s){
        vector<int> ans;
        for(char c:s){
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' )
            ans.push_back(1);
            else return 0;

        }
    }
};