///week10-4.cpp
#include <iostream>
using namespace std;
int main(){
	int a[10][10],b[10][10],c[10][10];
	int d;
	cin>>d;
	for(int i=0;i<d;i++)
		for(int j=0;j<d;j++)
			cin>>a[i][j];
	for(int i=0;i<d;i++)
		for(int j=0;j<d;j++)
			cin>>b[i][j];
	for(int i=0;i<d;i++){
		for(int j=0;j<d;j++){
			int now=0;
			for(int k=0;k<d;k++)
				now+=a[i][k]*b[k][j];
			printf("%3d ",now);
		}
		cout<<endl;
	}
}
