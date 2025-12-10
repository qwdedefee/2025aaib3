///week14-1c.cpp
# include <iostream>
using namespace std;
void f(int a){
    if(a==0) return;
    cout<<a%10;
    f(a/10);
}
int main(){
    int a;
    cin>>a;
    f(a);
    cout<<endl;
}
