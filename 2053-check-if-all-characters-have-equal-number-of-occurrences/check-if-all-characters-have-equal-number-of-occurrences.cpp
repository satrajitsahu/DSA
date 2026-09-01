class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int count[26]={0};
        for(char c:s){
            count[c-'a']++;
        }
        int res=count[s[0]-'a'];
        for(int i=0;i<26;i++){
            if(count[i]!=0 && count[i]!=res){
                return false;
            }
        }
        return true;
    }
};