#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[5][5],i,j,sum=0;
	
	cout<<"enter elements of array";
	for(i=2;i>0;i--){
		for(j=0;j<3;j++){
			
			cin>>a[i][j];
			if(j==i){
				sum+=a[i][j];
			}
			
			
		}
	}
	cout<<sum;
	}
	

