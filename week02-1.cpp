///week02-1.cpp
#include <stdio.h>
int main(){
	int a,b=0,c;
	scanf("%d",&a);
	c=a;
	while(a>0){
		b=10*b+a%10;
		a/=10;
	}
	printf("%d+%d=%d\n",c,b,c+b);
}
