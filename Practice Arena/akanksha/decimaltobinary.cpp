#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[25],i=0,p=0,n,j;
	cout<<"enter any number";
	cin>>n;
	while(n>0){
		p=n%2;
		a[i]=p;
		i++;
		n=n/2;
	}
	for(j=i-1;j>=0;j--){
		cout<<a[j];
	}
}
