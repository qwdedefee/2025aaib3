///week11-1b.cpp leetcode Q.2154
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numsSet;
        for(int num:nums) numsSet.insert(num);
        while(numsSet.find(original)!=numsSet.end()){
            original*=2;
        }
        return original;
    }
};
