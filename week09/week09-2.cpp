///week09-2.cpp
///leetcode P.S.Q.73
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<bool> marki(m),markj(n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    marki[i]=true;
                    markj[j]=true;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(marki[i]==true||markj[j]==true){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
