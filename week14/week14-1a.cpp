///week14-1a.cpp
#include <iostream>
using namespace std;
int main(){
	int a,b=0;
	cin>>a;
	while(a>0){
		b=10*b+a%10;
		a/=10;
	}
	cout<<b<<endl;
}
