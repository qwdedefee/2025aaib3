///week11-4b.cpp
#include <iostream>
using namespace std;
int max_digit(int n){
	int a=0;
	while(n>0){
		if(n%10>a) a=n%10;
		n/=10;
	}
	return a;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
