class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
            int a=0;
            for(int i=1;i<nums.size();i++){
                if(nums[i]<nums[a]){
                    a=i;
                }
            }
            nums[a]*=multiplier;
        }
        return nums;
    }
};