class Solution {
public:
    string convertDateToBinary(string date) {
        int year=stoi(date.substr(0, 4));
        int month=stoi(date.substr(5, 2));
        int day=stoi(date.substr(8, 2));
        return toBinary(year)+"-"+toBinary(month)+"-"+toBinary(day);
    }
private:
    string toBinary(int n){
        if(n==0)return "0";
        string bi="";
        while(n>0){
            bi+=to_string(n%2);
            n/=2;
        }
        reverse(bi.begin(),bi.end());
        return bi;
    }
};