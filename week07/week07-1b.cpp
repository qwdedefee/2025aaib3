///week07-1b.cpp TAICA NYCU Midterm Q.6
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<2*n;i++){
        for(int j=1;j<2*n;j++){
            if(j>1) cout<<" ";
            int d=max(abs(i-n),abs(j-n));
            cout<<d+1;
        }
        ///cout<<"�{�b�O��i�ӡAi="<<i;
        cout<<endl;
    }
}

