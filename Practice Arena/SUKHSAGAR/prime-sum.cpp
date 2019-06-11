#include<iostream>
#include<conio.h>
using namespace std;
int prime(int);
int main(){
	int num,flag=0,sum=0;
	for (num=2;num<=100;num++){
		flag = prime(num);
		if (flag==0){
			cout<<num<<endl;
			sum+=num;
		}
	}	
	cout<<"The sum of prime numbers between 1 and 100 is "<< sum;
}
int prime(int num){
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
			return 1;
		}
	}
	return 0;
}
