class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.empty())return 0;
        int maxl=1;
        int incl=1;
        int decl=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                incl++;
                decl=1;
            }else if(nums[i]<nums[i-1]){
                decl++;
                incl=1;
            }else{
                decl=1;
                incl=1;
            }
            maxl=max({maxl,incl,decl});
        }
        return maxl;
    }
};