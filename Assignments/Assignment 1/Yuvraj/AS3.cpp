#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[10];
	int i,n,min,max;
	cout<<"Enter the no of elements of an array";
	cin>>n;
	cout<<"Enter the elements of an array";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
		min=max=a[0];
	for(i=0;i<n;i++)
		{
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min ){
			min	=a[i];
		}
	}
	cout<<"max element is"<<max<<endl<<"Min Element is "<<min;
	return 0;
}
