///week01-4b.cpp
#include <iostream>
using namespace std;
int main(){
	int a,b,c=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
		if(i%3==0)
			c+=i;
	cout<<c;
}
