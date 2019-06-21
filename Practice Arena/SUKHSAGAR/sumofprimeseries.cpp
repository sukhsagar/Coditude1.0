//Sum of prime series.
#include<iostream>
using namespace std;
int main(){
	int sum=0,primefound=0,count=0,flag=0;
	cout<<"Enter the number of terms:";
	cin>>count;
	int i=1,number=2;
	while(i<=count){
		if(i%2!=0){
			cout<<"1+";
		}
		else{
			primefound=0;
			while(!primefound){
				flag=0;
				for(int j=2;j<=number/2;j++){
					if(number%j==0){
						flag=1;
						break;
					}
				}
				if(flag==0){
					cout<<"1/"<<number<<"+";
					primefound=1;
					number++;
				}
				else{
					number++;
				}
			}
		}
		i++;
	}
}
