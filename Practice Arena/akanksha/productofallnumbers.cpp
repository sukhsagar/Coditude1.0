#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num,ldigit,temp=1;
	cout<<"enter any number";
	cin>>num;
	while(num/10>0){
		temp=1;
		while(num>0){
			
			
			 temp=temp*(num%10);
			
	          num=num/10;
			
		}
		num=temp;
		
		
	}
	cout<<"number is"<<num;
}
