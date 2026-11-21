class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int a=0;
        for(int num:nums){
            while(num>0){
                if(num%10==digit){
                    a++;
                }
                num/=10;
            }
        }
        return a;
    }
};