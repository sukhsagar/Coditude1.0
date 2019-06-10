#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[10],n,i=0;
	int large=0,small=0;
	cout<<"Enter the size of array";
	cin>>n;
	cout<<"Enter a["<<i<<"]";
	cin>>a[0];
	large = small = a[0];
	for(i=1;i<n;i++){
		cout<<"Enter a["<<i<<"]";
		cin>>a[i];
		if(large<a[i]){
			large=a[i];
		}
		if(small>a[i]){
			small=a[i];
		}
	}
	cout<<"largest element is"<<large<<endl<<"smallest element is"<<small;
	return 0;
}
