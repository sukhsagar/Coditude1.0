#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char str[30]="Hello. How are you?";
	int i=0,count=0;
	while(str[i]!='\0'){
		switch (str[i]){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				count++;
				break;
		}
		i++;
	}
	cout<<count;
	return 0;
}
