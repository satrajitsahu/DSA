class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(s.length()<k){
            string a="";
            for(char c:s){
                a+=(c=='z')?'a':c+1;
            }
            s+=a;
        }
        return s[k-1];
    }
};