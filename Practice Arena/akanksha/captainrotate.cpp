#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[10];
	int i,n,temp,check,pos;
	cout<<"enter n";
	cin>>n;
	
	cout<<"array elements";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"enter 1 for cklwise and 2 otherwise";
	cin>>check;
	if(check==1){
		
		
		
	cout<<"enter position";
	cin>>pos;
	while(pos){
	
	temp=a[n-1];
	for(i=n-1;i>0;i--){
		a[i]=a[i-1];
	}
	a[i]=temp;
	pos--;
}
		}
		if(check==2){
			cout<<"enter position";
	        cin>>pos;
		while(pos)
		{
			temp=a[0];
			for(i=0;i<n-1;i++){
			a[i]=a[i+1];
			}
			a[i]=temp;
			pos--;
		}
   }
   for(i=0;i<n;i++){
		cout<<a[i];
	}
   return 0;
}
