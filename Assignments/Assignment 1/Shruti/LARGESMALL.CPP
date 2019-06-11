#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int a[5],n,i,big,small ;
   cout<<"enter the number of elements";
   cin>>n;
   for(i=0;i<n;i++)
   {
      cin>>a[i];
    }
    for(i=0;i<n;i++)
      {
	 cout<<"a["<<i<<"]="<<a[i]<<"\n";
	 }
     big=a[0];
     small=a[0];
     for(i=1;i<n;i++)
       {
	  if(a[i]>big)
	    {
		big=a[i];
	    }
	    if(a[i]<small){

		small=a[i];
	    }
	  }
	cout<<"small element="<<small<<"\n";
	cout<<"biggest element="<<big;








getch();
}