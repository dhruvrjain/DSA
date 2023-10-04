class MyHashMap {
public:
    vector<int> k,v;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        int n=k.size(),i;
        for(i=0;i<n;i++){
            if(key==k[i]){
                v[i]=value;
                return;
            }
        }
        k.push_back(key);
        v.push_back(value);
    }
    
    int get(int key) {
        int n=k.size(),i;
        for(i=0;i<n;i++){
            if(key==k[i]){
                return v[i];
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int n=k.size(),i;
        for(i=0;i<n;i++){
            if(key==k[i]){
                k.erase(k.begin()+i);
                v.erase(v.begin()+i);
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */