///week09-1.cpp
///leetcode P.S.Q.1672
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size(),n=accounts[0].size(),ans=0;
        for(int i=0;i<m;i++){
            int now=0;
            for(int j=0;j<n;j++){
                now+=accounts[i][j];
            }
            ans=max(ans,now);
        }
        return ans;
    }
};
