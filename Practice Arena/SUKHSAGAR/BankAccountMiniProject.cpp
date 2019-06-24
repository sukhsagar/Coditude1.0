#include<iostream>
#include<string>
using namespace std;

class BankAccount{
	
	public:
		int acc_no;
		int status;
		string name;
		double bal;
		string uid;
	
		void associateValues(int a, string n, double b, string u, int s){
			acc_no=a;;
			status=s;
			name=n;
			bal=b;
			uid=u;
		}
		
		static BankAccount find(int a, int n, BankAccount accounts[]){
			for(int i=0;i<n;i++){
				if(accounts[i].acc_no==a){
					return accounts[i];
				}
			}
			cout<<"Account not found. Please check your account number.";
			exit(1);
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
		
		double deposit(double d){
			bal+=d;
			return bal;
		}
		
		double withdraw(double w){
			if(w<bal){
				bal-=w;
				return bal;
			}
			cout<<"Not enough balance. You are Rs "<<w-bal<<" short of your current balance.";
			exit(1);			
		}
		
		void details(){
			cout<<"The account no "<<acc_no<<" is held by "<<name<<".";
			checkAccountStatus();
			cout<<"The account balance is Rs "<<bal<<". The uid number of the customer is "<<uid<<".";
			return;
		}
		
		static void checkKYC(BankAccount accounts[], int n){
			for (int i = 0; i<n; i++){
				if (accounts[i].uid==""){
					cout<<accounts[i].acc_no<<endl;
				}
			}
		}
};

int main(){
	BankAccount account[10];
	int accno; double amount; int choice; double bal;
	BankAccount acc;
	account[0].associateValues(101,"Akanksha",10000.00,"123456789",1);
	account[1].associateValues(123,"Harman",10000.00,"987654321",1);
	account[2].associateValues(145,"Nimret",10000.00,"147258369",1);
	account[3].associateValues(189,"Ankur",10000.00,"741852963",0);
	account[4].associateValues(151,"Aditya",10000.00,"789456123",1);
	account[5].associateValues(141,"Vritesh",10000.00,"",1);
	account[6].associateValues(113,"Yogesh",10000.00,"",1);
	account[7].associateValues(111,"Brijesh",10000.00,"123654987",2);
	account[8].associateValues(107,"Sagaria",10000.00,"987456123",1);
	account[9].associateValues(147,"Yuvraj",10000.00,"",2);
	cout<<"2. Deposit \n3. Withdraw\n4. Find Details \n5. List account without UID number \n6. Close a bank account."<<endl;
	cin>>choice;
	if(choice!=5 && choice<=6){
		cout<<"Enter the account number"<<endl;
		cin>>accno;
	}
	switch(choice){
		case 2:
			acc = BankAccount::find(accno,10,account);
			acc.checkAccountStatus();
			cout<<"Enter the amount to be deposited.";
			cin>>amount;
			bal=acc.deposit(amount);
			cout<<"The balance after depositing the amount is Rs "<<bal;
			break;
		case 3:
			acc = BankAccount::find(accno,10,account);
			acc.checkAccountStatus();
			cout<<"Enter the amount to be withdrawn.";
			cin>>amount;
			bal=acc.withdraw(amount);
			cout<<"The balance after the withdrawl is Rs "<<bal;
			break;
		case 4:
			acc = BankAccount::find(accno,10,account);
			acc.details();
			break;
		case 5:
			BankAccount::checkKYC(account,10);
			break;
		case 6:
			acc = BankAccount::find(accno,10,account);
			acc.status=2;
			cout<<"The status of the account no "<<acc.acc_no<<" has been set to deactivated.";
			break;
		default:
			cout<<"Wrong choice of operation.";
	}
	return 0;
}
