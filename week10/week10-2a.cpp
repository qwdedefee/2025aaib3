///week10-2a.cpp leetcode P.S.Q.1523
class Solution {
public:
    int countOdds(int low, int high) {
        int c=0;
        for(int i=low;i<=high;i++)
            if(i%2==1)
                c++;
        return c;
    }
};
