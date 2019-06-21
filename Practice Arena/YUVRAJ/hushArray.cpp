#include<iostream>
using namespace std;
int main(){
	int a[]={2,3,5,8,11,25};
    int b[]={80,72,64,6,4,1};
    int c[15];
    int x=0,y=5,i;
    for(i=0;i<12;i++){
        if(a[x]>b[y]){
            c[i]=b[y];
            if(y==0)
            y=5;
            else
            y--;
        }
        else{
             
            c[i]=a[x];
            if(x==5)
            x=0;
			else
			            x++;
        }
    }
    for(i=0;i<12;i++){
        cout<<c[i]<<endl;
    }
}
