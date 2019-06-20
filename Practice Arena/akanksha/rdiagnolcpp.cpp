#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[5][5],i,j,sum=0;
	
	cout<<"enter elements of array";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
			if(i==j){
				sum=sum+a[i][j];
			}
			
			
			
		}
	}
	cout<<sum;
	}
	

