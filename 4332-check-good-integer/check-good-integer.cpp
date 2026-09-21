class Solution {
public:
    bool checkGoodInteger(int n) {
        int a=0;
        int b=0;
        while(n>0){
            int digit=n%10;
            a+=digit;
            b+=(digit*digit);
            n/=10;
        }
        return b-a>=50;
    }
};