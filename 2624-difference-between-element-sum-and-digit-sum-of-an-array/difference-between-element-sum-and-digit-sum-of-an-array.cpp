class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum=0;
        int dsum=0;
        for(int num:nums){
        esum+=num;
        int ans=num;
        while(ans>0){
            dsum+=ans%10;
            ans/=10;
            }
        }
    return esum-dsum;
    }
};