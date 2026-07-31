class Solution {
public:
    int maxDistinct(string s) {
        std::unordered_set<char>distinct_char(s.begin(),s.end());
        return distinct_char.size();
    }
};