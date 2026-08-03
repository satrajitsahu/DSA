class Solution {
public:
    double average(vector<int>& salary) {
        //auto ans=minmax_ele(salary.begin(),salary.end());
        int min=INT_MAX;
        int max=INT_MIN;
        double avg=0;
        for(int s:salary){
            if(s<min)min=s;
            if(s>max)max=s;
            avg+=s;
        }
        avg=avg-min-max;
        return avg/(salary.size()-2);
    }
};