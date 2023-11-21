class Solution {
public:
    int n;
    vector<int> d;
    vector<vector<int>> p;
    int part(int l,int h){
        int piv=d[l],i,j,t;
        vector<int> temp;
        i=l-1;
        j=h+1;
        while(true){
            do{
                i++;
            }while(d[i]<piv);
            do{
                j--;
            }while(d[j]>piv);
            if(i>=j) return j;
            t=d[i];
            d[i]=d[j];
            d[j]=t;
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
        }
    }
    void qsort(int l,int h){
        if(l<h){
            int pi=part(l,h);
            qsort(l,pi);
            qsort(pi+1,h);
        }
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        n=points.size();
        if(n==k) return points;
        p=points;
        for(auto v:points){
            d.push_back(v[0]*v[0]+v[1]*v[1]);
        }
        qsort(0,n-1);
        p.erase(p.begin()+k,p.end());
        return p;
    }
};