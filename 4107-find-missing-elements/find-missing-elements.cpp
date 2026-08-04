class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=nums[0];
        int high=nums[nums.size()-1];
        vector<int>ans;
        int i=0;
    while(low<high){
        if(nums[i]!=low){
            ans.push_back(low);
            low++;
        }else{
            low++;i++;
        }
    }
        return ans;
    }
};