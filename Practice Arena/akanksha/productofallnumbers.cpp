#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num,ldigit,temp=1;
	cout<<"enter any number";
	cin>>num;
	while(num/10>0){
		while(num>0){
			ldigit=num%10;
			temp=ldigit;
			temp=temp*ldigit;
			num=num/10;
			
		}
		num=temp;
		
		
	}
	cout<<"number is"<<num;
}
