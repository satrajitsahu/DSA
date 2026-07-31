class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum=n*(n+1)/2;
        int ndiv=0;
        for(int i=1;i<=n;i++){
            if(i%m!=0){
                ndiv+=i;
            }
        }
        int num2=sum-ndiv;
        return ndiv-num2;
    }
};