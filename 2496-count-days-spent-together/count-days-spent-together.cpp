class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int>days={31,28,31,30,31,30,31,31,30,31,30,31};
        auto getDayNumber=[&](string date){
            int month=stoi(date.substr(0,2));
            int day=stoi(date.substr(3,2));
            int total=day;
            for(int i=0;i<month-1;i++){
                total+=days[i];
            }
            return total;
        };
        int a1=getDayNumber(arriveAlice);
        int l1=getDayNumber(leaveAlice);
        int a2=getDayNumber(arriveBob);
        int l2=getDayNumber(leaveBob);
        int start=max(a1,a2);
        int end=min(l1,l2);
        return max(0,end-start+1);
    }
};