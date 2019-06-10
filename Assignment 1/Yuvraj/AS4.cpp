#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,start,end;
	cout<<"enter the staring and end point of series";
	cin>>start>>end;
	cout<<"series is :";
	i=start-1;
	while(i<=end)
	{
		cout<<start<<"\t"<<i<<"\t";
		start++;
		i++;
	}
	return 0;
}
