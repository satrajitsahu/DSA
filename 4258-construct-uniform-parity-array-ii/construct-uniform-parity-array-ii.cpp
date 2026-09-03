class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min=nums1[0];
        bool odd=false;
        for(int x:nums1){
            if(x<min){
                min=x;
            }
            if(x%2!=0){
                odd=true;
            }
        }
        if(min%2!=0){
            return true;
        }
        if(!odd){
            return true;
        }
        return false;
    }
};