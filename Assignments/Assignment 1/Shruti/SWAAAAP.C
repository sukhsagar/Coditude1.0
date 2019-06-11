#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
  {

      int a,b;
      clrscr();
      printf("enter the values of a and b");
      scanf("%d%d",&a,&b);
      printf("value of a=%d\n",a);
      printf("value of b=%d\n",b);
      swap(&a,&b);
      printf("after swapping\n");
      printf("a=%d\n",a) ;
      printf("b=%d\n",b);
    getch();
 }
 void swap(int *x,int *y)
   {
       int z;
	z=*x;
       *x=*y;
       *y=z;
     }