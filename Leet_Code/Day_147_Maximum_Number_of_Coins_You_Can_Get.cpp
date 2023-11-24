class Solution {
public:
    vector<int> p;
    int part(int l,int h){
        int piv=p[l],i=l-1,j=h+1;
        while(true){
            do{
                i++;
            }while(p[i]<piv);
            do{
                j--;
            }while(p[j]>piv);
            if(i>=j) return j;
            swap(p[i],p[j]);
        }
    }
    void qsort(int l,int h){
        if(l<h){
            int pi=part(l,h);
            qsort(l,pi);
            qsort(pi+1,h);
        }
    }
    int maxCoins(vector<int>& piles) {
        p=piles;
        int i=0,ans=0,j,n=p.size();
        j=n-2;
        qsort(0,n-1);
        while(i<j){
            ans+=p[j];
            j-=2;
            i++;
        }
        return ans;
    }
};