///week07-1a.cpp TAICA NYCU Midterm Q.6
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<2*n;i++){
        for(int j=1;j<2*n;j++){
            if(j>1) cout<<" ";
            cout<<n;
        }
        cout<<"�{�b�O��i�ӡAi="<<i;
        cout<<endl;
    }
}
