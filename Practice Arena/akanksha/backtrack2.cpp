#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int i,j,c;
	int a[7]={10,80,60,70,60,75,85};
	//int b[7]={1,1,1,1,1,1,1};
	cout<<"1"<<endl;
	for(i=1;i<7;i++){
		c=1;
		for(j=i-1;j<7;j--){
		if(a[i]<a[j]){
			break;
		    }
			else
			c++;
	    }
	    cout<<c<<endl;
	}
	/*for(i=0;i<7;i++){
	
	cout<<b[i]<<endl;
}*/
	
	return 0;
	
}
