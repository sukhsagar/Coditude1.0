#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[10],b[10],c[10],i,j,k,n;
	cout<<"enter value of n for first array";
	cin>>n;
	cout<<"enter first array elements";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"enter second array elements";
	for(i=0;i<n;i++){
		cin>>b[j];
	}
	
	while((i<=n-1)||(j>=0)){
		if(a[i]<b[j]){
			c[k]=a[i];
			i++;
			k++;
		}
		else{
			c[k]=b[j];
			j++;
			k++;
		
		}
		if(j<=0){
		while	(i<=n-1){
			c[k]=a[j];
			i++;
			k++;
		}
		if(i>=n-1){
			while(j<=0){
				
					c[k]=b[j];
					j++;
					k++;
				
			}
		}
		
		
		}
	}
	cout<<"final array is "<<c[k];
	
}
