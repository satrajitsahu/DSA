class Solution {
public:
        int getProsum(int num){
        int pro=1;
        while(num>0){
            pro*=(num%10);
            num/=10;
        }
        return pro;
    }
    int smallestNumber(int n, int t) {
        while(true){
            if(getProsum(n)%t==0){
                return n;
            }
            n++;
        }
    }
};