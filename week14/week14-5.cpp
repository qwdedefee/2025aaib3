///week14-5.cpp
#include <iostream>
using namespace std;
int main(){
    int a;
    while(cin>>a){
        if(a<0) break;
        cout<<1+(1+a)*a/2<<endl;
    }
}
