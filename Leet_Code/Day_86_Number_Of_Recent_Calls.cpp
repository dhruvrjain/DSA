class RecentCounter {
public:
    vector<int> a;
    int i;
    int j;
    RecentCounter() {
    }
    
    int ping(int t) {
        a.push_back(t);
        if(a.size()==1){
            i=j=0;
        }
        else{
            j++;
            while(a[i]<t-3000)
            i++;
        }
        return (j-i+1);
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */