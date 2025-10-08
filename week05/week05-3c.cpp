///week05-3c.cpp CPE Q.2 UVA 483
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){
    string line;
    while(getline(cin,line)){
        stringstream ss(line);
        string word;
        ss>>word;
        reverse(word.begin(),word.end());
        cout<<word;
        while(ss>>word){
            reverse(word.begin(),word.end());
            cout<<" "<<word;
        }
        cout<<endl;
    }
}
