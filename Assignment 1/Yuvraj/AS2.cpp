#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char c;
	cout<<"Enter any character";
	cin>>c;
	if(c>='A' && c<='Z')
	{
		cout<<"Character is in Uppercase";
	}
	else if(c>='a' && c<='z')
	{
		cout<<"Character is in Lowercase";
	}
	else if(c>='0' && c<='9')
	{
		cout<<"Character is in Uppercase";
	}
	else
	{
		cout<<"Character is in other format";
	}
	return 0;
}
