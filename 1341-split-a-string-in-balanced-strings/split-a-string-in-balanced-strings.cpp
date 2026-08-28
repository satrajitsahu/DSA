class Solution {
public:
    int balancedStringSplit(string s) {
        int split=0;
        int bal=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L'){
                bal++;
            }else if(s[i]=='R'){
                bal--;
            }
            if(bal==0){
                split++;
            }
        }
        return split;
    }
};