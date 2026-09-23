class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        auto cons=[](const string& timeStr){
            int hour=stoi(timeStr.substr(0,2));
            int min=stoi(timeStr.substr(3,2));
            int sec=stoi(timeStr.substr(6,2));
            return (hour*3600)+(min*60)+sec;
        };
        return cons(endTime)-cons(startTime);
    }
};