#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[10],i,j,temp,n=8;
	
	cout<<"enter array elements";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(i=0,j=n-1;i<n/2;i++,j--)
		{
		     temp=a[j];
		     a[j]=a[i];
		     a[i]=temp;
		}
		
		
		
			
		 
		
		
	
	for(i=0;i<n;i++){
		cout<<"\n"<<a[i];
	}
}
