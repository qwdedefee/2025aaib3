///week08-1.cpp leetcode Q.3370
class Solution {
public:
    int smallestNumber(int n) {
        int a=1;
        while(n>=a){
            a*=2;
        }
        return a-1;
    }
};
