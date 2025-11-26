///week12-1.cpp
#include <iostream>
using namespace std;
int max(int a,int b,int c,int d){
	int f=a;
	if(b>f) f=b;
	if(c>f) f=c;
	if(d>f) f=d;
	return f;
}
int min(int a,int b,int c,int d){
	int f=a;
	if(b<f) f=b;
	if(c<f) f=c;
	if(d<f) f=d;
	return f;
}
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
