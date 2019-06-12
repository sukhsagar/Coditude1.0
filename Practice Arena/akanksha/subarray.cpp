#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int sum=13,sum2=0,i,j,n;
	int a[10]={'1','2','3','5','6','7','8','12','14','21'};
	for(i=0;i<n;i++){
		sum2=a[j];
		for(j=i+1;j<n;j++)
		{
			sum2=sum2+a[j];
			if(sum2==sum){
				for(i=0;i<n;i++){
					for(j=0;j<n;j++){
						cout<<a[i][j];
					}
					
				}
			}
			if(sum2>sum){
			
				break;
			}
		}
	}
}
