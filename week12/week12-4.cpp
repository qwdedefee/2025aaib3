///week12-4.cpp
class Solution {
public:
    string multiply(string num1, string num2) {
        int n1=num1.length(),n2=num2.length();
        int n=n1+n2;
        vector<int> ans(n);
        if(num1=="0"||num2=="0") return "0";
        for(int i=n1-1;i>=0;i--){
            for(int j=n2-1;j>=0;j--){
                ans[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                if(ans[i+j+1]>9){
                    ans[i+j]+=ans[i+j+1]/10;
                    ans[i+j+1]%=10;
                }
            }
        }
        string s="";
        if(ans[0]==0){
            for(int i=1;i<n;i++) s+=(char)(ans[i]+'0');
        }
        else{
            for(int i=0;i<n;i++) s+=(char)(ans[i]+'0');
        }
        return s;
    }
};
