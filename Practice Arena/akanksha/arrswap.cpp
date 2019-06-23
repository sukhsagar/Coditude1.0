#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,j,n=7,temp;
	int a[10]={'1','2','3','4','5','6','7','8'};
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			temp=a[i];
			a[i]=a[n];
			a[n]=temp;
		}
	}
	
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
