class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.length()>2){
            string a="";
            for(int i=0;i<s.length()-1;i++){
              int sum=(s[i]-'0')+(s[i+1]-'0');
              a+=to_string(sum%10);
            }
            s=a;
        }
        return s[0]==s[1];
    }
};