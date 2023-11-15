class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j,p;
        i=m-1;
        j=n-1;
        p=m+n-1;
        while(i>=0 && j>=0){
            if(nums2[j]>nums1[i]){
                nums1[p--]=nums2[j--];
            }
            else{
                nums1[p--]=nums1[i--];
            }
        }
        if(j>=0){
            while(j>=0){
                nums1[p--]=nums2[j--];
            }
        }
    }
};