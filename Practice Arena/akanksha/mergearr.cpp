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
	
	while((i<n)||(j>0)){
		if(a[i]<b[j]){
			c[k]=a[i];
			k++;
			i++;
			while(i<n){
				c[k]=a[i];
				k++;
				i++;
			}
			
			}
		else{
			c[k]=b[j];
			k++;
			j--;
			while(j>0){
				c[k]=b[j];
				k++;
				j++;
			}
			
		}
	}
	
	cout<<"final array is ";
	for(i=0;i<n;i++){
		cout<<c[k];
	
	}
	
	}
	
	

