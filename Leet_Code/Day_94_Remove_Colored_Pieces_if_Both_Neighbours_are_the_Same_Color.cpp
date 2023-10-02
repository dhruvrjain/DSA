class Solution {
public:
    bool winnerOfGame(string colors) {
        int a=0,b=0,c=0,i,j,n=colors.length();
        i=0;
        char cc=colors[0];
        while(i<n){
            if(colors[i]==cc){
                c++;
            }
            else{
                if(c>2){
                    if(cc=='A'){
                        a+=c-2;
                    }
                    else{
                        b+=c-2;
                    }
                }
                c=1;
                cc=colors[i];
            }
            i++;
        }
        if(c>2){
            if(cc=='A'){
                a+=c-2;
            }
            else{
                b+=c-2;
            }
        }
        if(a<=b) return false;
        return true;
    }
};