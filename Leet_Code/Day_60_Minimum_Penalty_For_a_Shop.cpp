class Solution {
public:
    int bestClosingTime(string customers) {
        int p=0,n=customers.size(),i,min,mini=0;
        for(char c:customers){
            if(c=='Y'){
                p++;
            }
        }
        min=p;
        for(i=1;i<=n;i++){
            if(customers[i-1]=='Y')
            {
                p--;
                if(p<min){
                    min=p;
                    mini=i;
                }
            }
            else{
                p++;
            }
        }
        return mini;
    }
};