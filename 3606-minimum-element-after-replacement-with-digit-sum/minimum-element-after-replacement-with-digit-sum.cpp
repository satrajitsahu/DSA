class Solution {
public:
    int minElement(vector<int>& nums) {
        int min=INT_MAX;
        for(int num:nums){
            int sum=0;
            int temp=num;
            while(temp>0){
                sum+=temp%10;
                temp/=10;
            }
            min=std::min(min,sum);
        }
        return min;
    }
};