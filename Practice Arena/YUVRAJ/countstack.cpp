#include<iostream>
using namespace std;
int main(){
	int a[]={10,90,60,70,60,75,85};
	int size=7,count=1;
	for(int j=size-1;j>=0;j--){
	for(int i=j-1;i>=0;i--){
		if(a[j]>a[i]){
			count++;
		}
		if(a[i]>a[j])
		break;
	}
	cout<<"count of "<<a[j]<<"is "<<count<<endl;
	count=1;
	}
	return 0;
}
