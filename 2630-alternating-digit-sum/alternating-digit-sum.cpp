class Solution {
public:
    int alternateDigitSum(int n) {
        string s=to_string(n);
        int ans=0;
        int sign=1;
        for(char c:s){
            int digit=c-'0';
            ans+=sign*digit;
            sign*=-1;
        }
        return ans;
    }
};