#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	
	int i,n=5,item,rear=0,front=0;
int a[10]={10,20,30,40,50};
	cout<<"enter item";
	cin>>item;
	
	if((front==rear+1)||(rear==n-1)){
		cout<<"overflow";
		
	}
	
	else {
	for(i=0;i<n;i++){
	
		 	rear=rear+1;
		 }
		 }
		 a[rear]=item;
	
	cout<<"final array"<<"\n";
	for(i=0;i<n;i++){
		cout<<"\n"<<a[i];
	}
	}
	
	
	

