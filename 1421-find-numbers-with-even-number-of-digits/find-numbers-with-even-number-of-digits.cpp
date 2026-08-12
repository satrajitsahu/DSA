class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even=0;
        for(int num:nums){
            string snum=to_string(num);
            if(snum.length()%2==0){
                even++;
            }
        }
        return even;
    }
};