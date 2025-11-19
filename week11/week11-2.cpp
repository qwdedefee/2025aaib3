///week11-2.cpp leetcode P.S.Q.1491
class Solution {
public:
    double average(vector<int>& salary) {
        double t=0;
        int M=0,b=salary[0];
        for(int i=0;i<salary.size();i++){
            t+=salary[i];
            if(salary[i]>M) M=salary[i];
            if(salary[i]<b) b=salary[i];
        }
        return (t-M-b)/(salary.size()-2);
    }
};
