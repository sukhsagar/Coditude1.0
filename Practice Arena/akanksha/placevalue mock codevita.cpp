#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	
	int n = 3495,d,i,rem;
	int new1 =0;
	d=log10(n);
	for(i=0;i<d;i++){
		
		rem  = n%10;
		new1 =  rem*pow(10,i) + new1 ;
		n = n/10;
		
	}
	
	cout<<new1;
	
	return 0;
}
