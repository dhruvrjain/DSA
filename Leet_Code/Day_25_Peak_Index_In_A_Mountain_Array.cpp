class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int m,n=arr.size(),i,j;
        i=1;
        j=n-2;
        while(1){
            m=(i+j)/2;
            if(arr[m]>arr[m-1] && arr[m]>arr[m+1])
            return m;
            if(arr[m]>arr[m-1])
            i=m+1;
            else j=m-1;
        }
        return 0;
    }
};