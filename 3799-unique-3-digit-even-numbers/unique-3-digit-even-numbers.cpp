class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int>count(10,0);
        for(int digit:digits){
            count[digit]++;
        }
        int a=0;
            for(int i=100;i<=998;i+=2){
                int one=i%10;
                int ten=(i/10)%10;
                int hun=i/100;
                count[one]--;
                count[ten]--;
                count[hun]--;

                if(count[one]>=0 && count[ten]>=0 && count[hun]>=0){
                    a++;
                }
                count[one]++;
                count[ten]++;
                count[hun]++;
        }
        return a;
    }
};