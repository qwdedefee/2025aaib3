///week14-1b.cpp
#include <iostream>
using namespace std;
int f(int a){
	int b=0;
	while(a>0){
		b=10*b+a%10;
		a/=10;
	}
	return b;
}
int main(){
	int a;
	cin>>a;
	cout<<f(a)<<endl;
}
