#include<iostream>
using namespace std;
int main(){
	int a[]={100,80,60,70,60,75,85};
	int size=7,count=0;
	for(int j=size-1;j>=0;j--){
	for(int i=j-1;i>=0;i--){
		if(a[j]>a[i]){
			count++;
		}
		
	}
	cout<<"count of "<<a[j]<<"is "<<count+1<<endl;
	count=0;
	}
	return 0;
}
