class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int key=0;
        int place=1;
        for(int i=0;i<4;i++){
            int a=num1%10;
            int b=num2%10;
            int c=num3%10;
            int small=min({a,b,c});
            key+=small*place;
            num1/=10;
            num2/=10;
            num3/=10;
            place*=10;
        }
        return key;
    }
};