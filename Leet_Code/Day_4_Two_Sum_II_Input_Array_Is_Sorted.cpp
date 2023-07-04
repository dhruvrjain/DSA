class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i,j,n=numbers.size(),s;
        vector<int> ans;
        i=0;j=n-1;
        while(true){
            s=numbers[i]+numbers[j];
            if(s==target)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            if(s>target)
            j--;
            else
            i++;
        }
    }
};