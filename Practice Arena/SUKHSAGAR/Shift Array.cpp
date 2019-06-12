#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[]={1,2,5,9,12,13,14,15};
	int n=8;
	int r=3;
//	int temp;
//	for(int i=0;i<r;i++)
//	{
//		for(int j=n;j>=0;j--)
//		{
//			if(j==n)
//			{
//				temp=a[n];
//			}
//			else{
//				a[j+1]=a[j];
//			}
//		}
//		a[0]=temp;
//	}
	for(int i=0;i<n;i++)
	{
		cout<<a[(i+(n-r))%n]<<endl;
	}	
}

