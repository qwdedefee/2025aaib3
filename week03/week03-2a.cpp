///week03-2a.cpp
#include <stdio.h>
int main(){
	char a[5];
	int bad=0;
	scanf("%s",a);
	for(int i=0;i<4;i++){
		if(a[i]!=a[3-i])
			bad=1;
	}
	if(bad==1)
		printf("NO\n");
	else
		printf("YES\n");
}
