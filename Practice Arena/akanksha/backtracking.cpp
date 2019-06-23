#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int i,j;
	int a[7]={100,80,60,70,60,75,85};
	int b[7]={1,1,1,1,1,1,1};
	for(i=1;i<7;i++){
		for(j=i-1;j<7;j++){
		
			if(a[i]<a[j]){
			break;
		    }
			else 
			b[i]=b[i]+1;
	    }
	}
	for(i=0;i<7;i++){
	
	cout<<b[i];
}
	
	return 0;
	
}
