///week13-1a.cpp
#include <iostream>
using namespace std;
int main(){
	int a,b,c=0;
	cout<<"Enter two integers: \n";
	cin>>a>>b;
	for(int i=1;i<=a+b;i++)
		if(a%i==0&&b%i==0)
			c=i;
	cout<<"The greatest common divisor of "<<a<<" and "<<b<<" is "<<c<<endl;
}
