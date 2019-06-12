#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"enter the cell no(in order of m X n)";
	cin>>m>>n;
	if((m%2!=0 && n%2!=0) || (m%2==0 && n%2==0) || m==n){
		cout<<"black";
		
	}
	else{
		cout<<"white";
	}
}
