#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
    int n=nums.size(),i;
    vector<int> neg,pos;
    for(i=0;i<n;i++)
    {
        if(nums[i]<0)
        neg.push_back(nums[i]);
        else
        pos.push_back(nums[i]);
    }
    for(i=0;i<pos.size();i++)
    neg.push_back(pos[i]);
    return neg;
}