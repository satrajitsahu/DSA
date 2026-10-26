class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int pair=0;
        unordered_map<int,int>a;
        for(int num:nums){
            if(a.count(num-k)){
                pair+=a[num-k];
            }
            if(a.count(num+k)){
                pair+=a[num+k];
            }
            a[num]++;
        }
        return pair;
    }
};