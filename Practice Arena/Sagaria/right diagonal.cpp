#include<iostream>
using namespace std;
int main()

{
	int i,j,n,sum=0,m,a[50][50];
	cout<<"enter the size  of rows and columns u want";
	cin>>m>>n;
	cout<<"enter the elements into an array";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			}
	}
	cout<<"the elements of matrix are- ";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		{
			cout<<a[i][j];
		}
			cout<<"\n";
			
	}

     for(j=0;j<n;j++){
     	
     
				sum=sum+a[j][j];
			}
		
		
		
  cout<<" the sum of the right diagonal is "<<sum;

}
