///week02-2b.cpp
///use C++'s string
#include <iostream>
#include <string>
using namespace std;
int main(){
	string a,ans;
	cin>>a;
    for(int i=a.length()-1;i>=0;i--){
        ans+=a[i];
    }
    cout<<a<<"+"<<stoi(ans)<<"="<<stoi(a)+stoi(ans)<<"\n";
}
