class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char>uni(s.begin(),s.end());
        return uni.size();
    }
};