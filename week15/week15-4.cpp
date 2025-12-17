///week15-4.cpp leetcode P.S.Q.13
class Solution {
public:
    int able(char c){
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        if(c=='M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int ans=0;
        int prev=2000;
        for(int i=0;i<s.length();i++){
            int now=able(s[i]);
            if(prev<now) ans=ans+now-2*prev;
            else ans+=now;
            prev=now;
        }
        return ans;
    }
};
