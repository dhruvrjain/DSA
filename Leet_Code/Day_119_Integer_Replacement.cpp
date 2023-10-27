class Solution {
public:
    int minOp(int n,int op){
        if(n==1) return op;
        if(n%2==0) return minOp(n/2,op+1);
        return min(minOp(n/2+1,op+2),minOp(n/2,op+2));
    }
    int integerReplacement(int num) {
        return minOp(num,0);
    }
};