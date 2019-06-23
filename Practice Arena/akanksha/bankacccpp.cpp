#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
 class BAccount{
 	public:
 	int accno;
 	long bal;
 	string name;
 	float amount;
 	long new_bal;
 	int status;
 	BAccount()
 	{
 		name="";
 		bal=0;
	 }
 	
 	void addValues( string ename, long balance, int ac,int stts){
 		name=ename;
 		bal=balance;
 		accno=ac;
 		status=stts;
	}
 	
	 void display(){
 		cout<<"displaying"<<"\n";
 		 cout<<"account no="<<accno<<"\n"<<"balance="<<bal<<"\n"<<name;
	} 	
	
void deposit(){
	cout<<"\n"<<"enter amount to be deposited";
	cin>>amount;
	new_bal=bal+amount;
	cout<<"\n"<<"new balance is"<<new_bal;
	
	
}

void  withdraw()
{
	cout<<"\n"<<"enter amount to be withdrawn";
	cin>>amount;
	new_bal=bal-amount;
	cout<<"\n"<<"new balance is"<<new_bal;
}
	static void getBal(BAccount b[],int n,int ac,int stts){
		for(int i=0;i<n;i++){
			if(b[i].accno==ac) {
				cout<<"The balance in account number "<<ac<<" is Rs "<<b[i].bal<<"and name of account holder with account no"<<ac<<" is"<<b[i].name;
			}
		}
		if(stts==true){
			cout<<"\n"<<"Account is currently deactivated";
		}
	}
	
	
	
 };
 
 
 int main()
     {        
             //int choice=2;
             //cout<<"enter yourchoice";
             //cin>>choice;
             BAccount b1, b2;
 	         BAccount b[2];
 	         //switch(choice){
             //case 1:public void BAccount::display();
             //break;
             //case 2:BAccount::getBal(BAccount b[],int n,int ac);
             //break;
             //case 3: BAccount::deposit(b1&);
	            // break;
         //}
 	         b[0].addValues("Akansha",17000,123,false);
	         b[1].addValues("Sagar",12000,103,true);
	         b1.accno=21;
 	         b1.bal=2500;
 	         b1.bal=b1.bal+1000;
 	        b1.name="abhi";
 	        //b1.display();
 	         cout<<"\n";
 	
 	
 	b2.name="Akanksha";
 	b2.accno=10;
 	b2.bal=3000; 
 	BAccount::getBal(b,2,103,true);
 	//b2.display(); 
	cout<<"\n";
// 	
//	b[0].retrieve();
// 	b2.deposit();
// 	b2.withdraw();









 	
 	
 }
