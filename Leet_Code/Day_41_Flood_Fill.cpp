class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        fill(image,sr,sc,color,image[sr][sc]);
        return image;
    }
    void fill(vector<vector<int>>&img,int sr,int sc,int c,int t){
        if(sr<0 || sc<0 || sr>=img.size() || sc>=img[0].size())
        return;
        if(img[sr][sc]==c || img[sr][sc]!=t)
        return;
        img[sr][sc]=c;
        fill(img,sr-1,sc,c,t);
        fill(img,sr+1,sc,c,t);
        fill(img,sr,sc-1,c,t);
        fill(img,sr,sc+1,c,t);        
    }
};