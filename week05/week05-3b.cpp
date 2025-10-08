///week05-3b.cpp CPE Q.2 UVA 483
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
        while(ss>>word){
            reverse(word.begin(),word.end());
            cout<<" "<<word;
        }
        cout<<endl;
    }
    ///cout<<line<<endl;
}
