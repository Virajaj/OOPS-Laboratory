/*
Operations on Bank Account
Implement a class to illustrate working of a bank account of a customer that
consists of following members Data members:
i. Name of the customer
ii. Account Type
iii. Account Number
iv. Available balance amount in the account
Member Functions:
i. Assign initial values using constructors.
ii. Deposit an amount in account
iii. Withdraw an amount
iv. Display account details
*/
#include<iostream>
#include<string>
using namespace std;
string accountTypeName;
class bankAccount {
  string Name;
  int accountType;
  int accountNumber;
  int balance;
public:
  void accept();
  void display();
  void deposit();
  void withdraw();
  //--------------------------------------------------------
  bankAccount(string n,int aT,int aN,int b)
  {	cout<<"In the parameterized constructor\n";
  	   Name = n;
 	   accountType = aT;
 	   accountNumber = aN;
 	   balance = b;
	  
	}	  
	  
};
void bankAccount::deposit()
{	int depositAmt;
	cout<<"Please Enter the Amount to be deposited";
	cin>>depositAmt;
	balance += depositAmt;
	cout<<"The total amount now is: "<<balance;
}
void bankAccount::withdraw()
{
	int withdrawAmt;
	cout<<"Please Enter the Amount to be Withdrawn: ";
	cin>>withdrawAmt;
	if(withdrawAmt>balance)
	{
		cout<<"Amount greater than your balance can't be withdrawn! Your balance is: "<<balance<<endl;
	}
	else
	{
		balance -= withdrawAmt;
	}
}
/*
void bankAccount::accept() {
  cout << "Hello! Please Enter Your Name!" << endl;
  cin >> Name;
  cout << "Now Enter Your Account Type\n1.)Savings\t2.)Current\t3.)DMAT\n";
  cin >> accountType;
  if (accountType == 1) {
      accountTypeName = "Savings";
  } else if (accountType == 2) {
      accountTypeName = "Current";
  } else if (accountType == 3) {
      accountTypeName = "DMAT";
  } else {
      cout << "Pls Enter Only between 1,2 & 3" << endl;
      accountTypeName = "Invalid";
  }
  cout << "Great! Enter your account Number:\t" << endl;
  cin >> accountNumber;
  cout << "Enter your Balance" << endl;
  cin >> balance;
}
*/
void bankAccount::display() {
  cout << "Name: " << Name << endl;
  cout << "Account Type Code: " << accountType << endl;
  cout << "Account Type: " << accountTypeName << endl;
  cout << "Account Number: " << accountNumber << endl;
  cout << "Balance: " << balance << endl;
}
int main() {
  int choice;
  string ne;
  int a ;
  int t;
  int be;
  cout << "Hello! Please Enter Your Name!" << endl;
  cin>>ne;
  cout << "Now Enter Your Account Type\n1.)Savings\t2.)Current\t3.)DMAT\n";
  cin>>a;
  if (a == 1) {
      accountTypeName = "Savings";
  } else if (a == 2) {
      accountTypeName = "Current";
  } else if (a == 3) {
      accountTypeName = "DMAT";
  } else {
      cout << "Pls Enter Only between 1,2 & 3" << endl;
      accountTypeName = "Invalid";
  }
  cout << "Great! Enter your account Number:\t" << endl;
  cin>>t;
  cout << "Enter your Balance" << endl;
  cin>>be; 
  bankAccount Viraj(ne,a,t,be);
  char ch1;
  do {cout << "1.)Accept\t2.)Display\t3.)Deposit\t4.)Withdraw\n";
      cin >> choice;
      switch(choice)
      { //case 1: Viraj.accept(); break;
          case 2: Viraj.display(); break;
          case 3: Viraj.deposit(); break;
          case 4: Viraj.withdraw(); break;
      }
      cout << "Do you want to continue?(y/n)";
      cin >> ch1;
  } while(ch1 == 'y' || ch1 == 'Y');
  return 0;
}
