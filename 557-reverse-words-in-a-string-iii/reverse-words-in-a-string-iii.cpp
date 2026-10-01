class Solution {
public:
    string reverseWords(string s) {
        int right=0;
        int left=0;
        while(right<s.length()){
            while(right<s.length()&& s[right]!=' '){
                right++;
            }
            reverse(s.begin()+left,s.begin()+right);
            left=right+1;
            right=left;
        }
        return s;
    }
};