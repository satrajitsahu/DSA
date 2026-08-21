class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int large=INT_MIN;
        int small=INT_MAX;
        int secsmall=INT_MAX;
        int seclarge=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>large){
                seclarge=large;
                large=nums[i];
            }else if(nums[i]>seclarge){
                seclarge=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
        if(nums[i]<small){
            secsmall=small;
            small=nums[i];
        }else if(nums[i]<secsmall){
            secsmall=nums[i];
            }
        }
        return (large*seclarge)-(small*secsmall);
    }
};