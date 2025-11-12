///week10-1.cpp leetcode P.S.Q.1572
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int a=0,n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j||i+j==n-1)
                    a+=mat[i][j];
            }
        }
        return a;
    }
};
