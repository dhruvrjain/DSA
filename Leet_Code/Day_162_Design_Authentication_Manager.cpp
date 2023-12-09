class AuthenticationManager {
public:
    int ttl;
    unordered_map<string,int> manager;
    AuthenticationManager(int timeToLive) {
        ttl=timeToLive;
    }
    
    void generate(string tokenId, int currentTime) {
        manager[tokenId]=currentTime+ttl;
    }
    
    void renew(string tokenId, int currentTime) {
        if(manager[tokenId]>currentTime) manager[tokenId]=currentTime+ttl;
    }
    
    int countUnexpiredTokens(int currentTime) {
        int c=0;
        for(auto p:manager){
            if(p.second>currentTime) c++;
        }
        return c;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */