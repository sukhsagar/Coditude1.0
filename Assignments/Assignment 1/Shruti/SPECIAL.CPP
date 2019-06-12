#include<iostream.h>
#include<conio.h>
void main()
{
  char s;
  cout<<"enter any character";
  cin>>s;
  if(s>=65 && s<=90)
    cout<<"uppercase";
    else if(s>=97 && s<=122)
      cout<<"lowercsase";
      else if(s>=48 && s<=57)
	 cout<<"digit";
       else
	  cout<<"special character";


	  getch();
      }
