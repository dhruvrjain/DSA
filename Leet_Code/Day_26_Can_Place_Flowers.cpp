class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len=flowerbed.size(),i;
        for(i=0;i<len;i++){
            if(n==0)
            return true;
            if(flowerbed[i]==0)
            {    
                if(i==0)
                {
                    if(len==1)
                    n--;
                    else if(flowerbed[i+1]==0 )
                    {
                        n--;
                        flowerbed[i]=1;
                        i++;
                    }
                }
                else if(i==len-1)
                {
                    if(flowerbed[i-1]==0)
                    {
                        n--;
                        flowerbed[i]=1;
                    }
                }
                else if(flowerbed[i+1]==0 && flowerbed[i-1]==0){
                    n--;
                    flowerbed[i]=1;
                    i++;
                }
            }
        }
        if(n)
        return false;
        return true;
    }
};