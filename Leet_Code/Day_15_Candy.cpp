class Solution {
public:
    int candy(vector<int>& ratings) {
        int i,n=ratings.size(),s=0,ce,f=1,c=0;
        int a[n];
        for(i=0;i<n;i++)
        a[i]=1;
        for(i=0;i<n;i++)
        {
            if(i>0 && ratings[i-1]<ratings[i])
            {
                if(a[i-1]>=a[i])
                {
                a[i]=a[i-1]+1;
                f=1;
                }
            }
            if(i<n-1 && ratings[i+1]<ratings[i])
            {
                if(a[i+1]>=a[i])
            { a[i]=a[i+1]+1;
                f=1;}
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(i>0 && ratings[i-1]<ratings[i])
            {
                if(a[i-1]>=a[i])
                {
                a[i]=a[i-1]+1;
                f=1;
                }
            }
            if(i<n-1 && ratings[i+1]<ratings[i])
            {
                if(a[i+1]>=a[i])
            { a[i]=a[i+1]+1;
                f=1;}
            }
        }
        for(i=0;i<n;i++)
        s+=a[i];
        return s;
    }
};