#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
 class BAccount{
 	public:
 	int accno;
 	double bal;
 	string name;
 	int status;
 	string uid;
 	BAccount()
 	{
 		name="";
 		bal=0;
	 }
 	
 	void addValues( string ename, long balance, int ac,int stts,string u){
 		name=ename;
 		bal=balance;
 		accno=ac;
 		status=stts;
 		uid=u;
	}
 	
	 void display(){
 		cout<<"displaying"<<"\n";
 		 cout<<"account no="<<accno<<"is current;y held by"<<name<<"\n";
 		 checkAccountStatus();
			cout<<"\n"<<"The account balance is Rs "<<bal<<"\n"<<"the user id of customer is"<<uid;
	} 	
	
      double deposit(double amount){
	bal=bal+amount;
	return bal;
	
	
      }

      double  withdraw(double amount)

     {
	 if(amount<bal){
	 bal=bal-amount;
	 return bal;
     }

      cout<<"Not enough balance. You are Rs "<<amount-bal<<" short of your current balance.";
	 exit(1);
	
     }
	 static  BAccount getacc(BAccount b[],int n,int ac){
	 for(int i=0;i<n;i++){
	   if(b[i].accno==ac) {
		//cout<<"The balance in account number "<<ac<<" is Rs "<<b[i].bal<<"and name of account holder with account no"<<ac<<" is"<<b[i].name;
	 return b[i];
		
	 }
			
	 }
	
	 }
	
	
     void checkAccountStatus(){
	 if(status==1){
	 return;
	 }
	 else if(status==2){
	 cout<<"Account is in dormant state. Please submit your KYC documents.";
		exit(1);
			}
		 else if(status==0){
		 cout<<"Account is in deactivated state. Please contact the branch manager.";
		 exit(1);
			}
		 }
	     static void checkKYC(BAccount b[], int n){
		 for (int i = 0; i<n; i++){
		 if (b[i].uid==""){
		 cout<<b[i].accno<<endl;
			}
			}
		}
	
	
	
 };
 
 
 int main()
     {        
        int accno; double amount; double bal; int choice;
        BAccount acc;
        
 	     BAccount b[7];
 	      b[0].addValues("Akansha",17000,123,1,"");
	      b[1].addValues("Sagar",21000,103,2,"243567891234");
	      b[2].addValues("yuvraj",14000,110,2,"");
	      b[3].addValues("nimret",16000,113,0,"775634582980");
	      b[4].addValues("harman",12300,111,1,"243564591234");
	      b[5].addValues("yogesh",14200,108,2,"");
	      b[6].addValues("ankur",13500,128,0,"987865984634");
	       cout<<"\n";
	       cout<<"1. deposit\n 2. withdraw\n 3. details\n 4. close account"<<endl;
           cin>>choice;
 	    	if(choice!=5 && choice<=6){
		     cout<<"Enter the account number"<<endl;
		     cin>>accno;
         switch(choice){
         	case 1: 
         	acc = BAccount::getacc(b,7,accno);
			acc.checkAccountStatus();
			 cout<<"Enter the amount to be deposited.";
			cin>>amount;
			bal=acc.deposit(amount);
			cout<<"The balance after depositing the amount is Rs "<<bal;
			break;
			case 2:
				
		     acc = BAccount::getacc(b,7,accno);
			 acc.checkAccountStatus();
				cout<<"enter amount to be withdrawn";
				cin>>amount;
				bal=acc.withdraw(amount);
				cout<<"The balance after withdrawing the amount is Rs "<<bal;
			break;
			case 3:
				
			acc = BAccount::getacc(b,7,accno);
			acc.display();
			break;	
			case 5:
			BAccount::checkKYC(b,10);
			break;
		case 6:
			acc = BAccount::getacc(b,7,accno);
			acc.status=2;
			cout<<"The status of the account no "<<acc.accno<<" has been set to deactivated.";
			break;
		default:
			cout<<"Wrong choice of operation.";
	}
	return 0;
			
		 }











 	
 	
 }
