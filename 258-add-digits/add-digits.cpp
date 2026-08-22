class Solution {
public:
    int addDigits(int num) {
        int ans=num;
        while(ans>=10){
            int sum=0;
            while(ans>0){
                sum+=ans%10;
                ans/=10;
            }
        ans=sum;
        }
        return ans;
    }
};