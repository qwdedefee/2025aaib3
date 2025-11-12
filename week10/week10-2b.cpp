///week10-2b.cpp leetcode P.S.Q.1523
class Solution {
public:
    int countOdds(int low, int high) {
        int c=(high-low)/2;
        if(high%2==1||low%2==1) c++;
        return c;
    }
};
