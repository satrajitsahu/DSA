class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int freq[101]={0};
        int p=0;
        for(int num:nums){
            p+=freq[num];
            freq[num]++;
        }
        return p;
    }
};