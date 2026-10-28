class Solution {
public:
    int countAsterisks(string s) {
        int a=0;
        int pair=false;
        for(char c:s){
            if(c=='|'){
                pair=!pair;
            }else if(c=='*'&&!pair){
                a++;
            }
        }
        return a;
    }
};