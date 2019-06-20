#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int i=1,flag=0,n,num,sum;
	cout<<"enter number";
	cin>>n;
	for(i=1;i<=n;i++){
		if(i%2!=0){
			sum= sum + 1;
			flag==1;
			
		}
		else if( flag==0)
		{
			for(i=2;i<n;i++){
				if(num%i!=0){
					sum+1/(num);
					num=num+1;
		
				}
				
			}
		}
		else{
			num=num+1;
		}
		
		}
		cout<<"num is"<<num;
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
