class TimeMap {
public:
    unordered_map<string,map<int,string>> m;
    int rec;
    unordered_map<string,int> first;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        rec=timestamp;
        if(first[key]==0){
            first[key]=timestamp;
        }
        m[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
        if(m[key][timestamp]==""){
            if(first[key]>timestamp)
            return "";
            int i;
            if(timestamp>rec)
            i=rec;
            else
            i=timestamp;
            for(;i>0;i--){
                if(m[key][i]!="")
                break;
            }
            timestamp=i;
        }
        return m[key][timestamp];
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */