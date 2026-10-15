class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            unordered_set<int>dis;
            for(int j=i;j<n;j++){
                dis.insert(nums[j]);
                int a=dis.size();
                sum+=a*a;
            }
        }
        return sum;
    }
};