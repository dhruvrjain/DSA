class Solution {
public:
    vector<int> arr;
    int part(int l,int h){
        int t,piv=arr[l],i=l-1,j=h+1;
        while(true){
            do{
                i++;
            }while(arr[i]<piv);
            do{
                j--;
            }while(arr[j]>piv);
            if(i>=j) return j;
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    void qsort(int l,int h){
        if(l<h){
            int pi=part(l,h);

            qsort(l,pi);
            qsort(pi+1,h);
        }
    }
    int minPairSum(vector<int>& nums) {
        arr=nums;
        int ans=0,n=arr.size(),i,j;
        i=0;
        j=n-1;
        qsort(i,j);
        for(int num:arr){
            cout<<num<<" ";
        }
        while(i<j){
            if(arr[i]+arr[j]>ans) ans=arr[i]+arr[j];
            i++;
            j--;
        }
        return ans;
    }
};