#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main()
{
	char a[10],i,j,flag;
	cout<<"enter";
	cin>>a;
	for(i=0;i<strlen(a);i++){
		for(j=i+1;j<strlen(a);j++)
		{
			if(a[j]==a[i]){
				
				flag==1;
			}
			
		}
	}
	cout<<"characters repeat";
}
