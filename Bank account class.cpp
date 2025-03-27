#include<iostream>
using namespace std;
class BankAccount
{
	public:
		 int balance = 100;
		string name;
		int account_number;
		
	//Function to show user balance
	getbal(int balance)
	{
		cout<<"Your balance is: "<<balance<<'\n';
	}	
	int getbalance = getbal(balance);
	
	
	
	
	
	
	
	
	
	//Function to transfer money
	sendMoney(int balance, int account_number)
	{
		cout<<"Enter the recipient's account number";
		cin>>account_number;
		
		
			float deduct;
			cout<<"How much do you want to transfer";
			cin>>deduct;
			
			
			if(deduct<balance)
			{
				balance -=deduct;
				cout<<"Transfer succesful";
			}
			else
			{
				cout<<"Transfer unsuccesful, insufficient funds.";
			}
			
	
		
		
	}
	int transfer = sendMoney(balance, account_number);
};

int main()
{
	BankAccount account1;
	
	account1.transfer;
	account1.getbalance;
}



