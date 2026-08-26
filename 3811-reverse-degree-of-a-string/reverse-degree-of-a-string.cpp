class Solution {
public:
    int reverseDegree(string s) {
        int a=0;
        for(int i=0;i<s.size();i++){
            int reverse=26-(s[i]-'a');
            a+=reverse*(i+1);
        }
        return a;
    }
};