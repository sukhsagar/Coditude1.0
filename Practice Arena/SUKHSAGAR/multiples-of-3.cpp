#include<iostream>
using namespace std;
int main(){
	int count=0,num=3;
	while(count<10){
		if(num%2!=0){
			cout<<num<<endl;
			count++;
		}
		num=num+3;
		
	}
	return 0;
}
