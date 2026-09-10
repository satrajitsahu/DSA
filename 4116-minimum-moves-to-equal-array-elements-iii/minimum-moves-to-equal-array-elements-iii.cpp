class Solution {
public:
    int minMoves(vector<int>& nums) {
        int a=0;
        int max=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            a+=(max-nums[i]);
        }
        return a;
    }
};