#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *x,int *y){
	if(x==y)
	return;
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}
int main(){
	int x,y;
	cout<<"enter 2 varibles :"<<endl;
	cin>>x>>y;
	swap(&x,&y);
	cout<<"values after swapping :";
	cout<<x<<" "<<y;
	return 0;
}

