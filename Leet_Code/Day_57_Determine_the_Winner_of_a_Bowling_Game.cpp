class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int s1=0,s2=0,f=0;
        for(auto n:player1){
            if(f){
                f--;
                s1+=2*n;
            }
            else{
                s1+=n;
            }
            if(n==10)
            f=2;
        }
        f=0;
        for(auto n:player2){
            if(f){
                f--;
                s2+=2*n;
            }
            else{
                s2+=n;
            }
            if(n==10)
            f=2;
        }
        return (s1==s2)?0:(s1>s2)?1:2;
    }
};