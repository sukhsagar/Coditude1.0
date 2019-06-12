#include<iostream>
using namespace std;
int main(){
	int a=2,b=1;
	int c=0,count=0;
	if(a%2!=0){
		cout<<a<<endl;	
		count++;
	}
	if(b%2!=0){
		cout<<b<<endl;	
		count++;
	}
	while(count<25){
		c=a+b;
		if(c%2!=0){
			cout<<c<<endl;	
			count++;
		}
		a=b;
		b=c;
	}
	return 0;
}
