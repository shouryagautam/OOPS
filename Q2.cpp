#include<iostream>
#include<string.h>
using namespace std;

class Bank_Account{
	
	string name;
    int accNo;
    string accType;
    int balance;
    
    public:
    	
    	Bank_Account(string n,int acc,string type, int bal){
    		
    		name = n;
    		accNo = acc;
    		accType = type;
			balance = bal;	
		}
		
		void deposit(int amt){
			balance = balance + amt ;
			cout<<"Deposit Successful::"<<endl;
			cout<<"The new balance = "<<balance<<endl;
			
		}
		void withdraw(int amt){
			if(amt>balance)
			   cout<<"Insufficient balance!"<<endl;
			
			else
			{
			   balance = balance - amt;
			   cout<<"Withdraw Successful::"<<endl;
			   cout<<"The remaining balance = "<<balance<<endl;
		    }	
		}
		
		void display(){
			cout<<"The Name of the current account holder::"<<endl;
			cout<<name<<endl;
			
			cout<<"The current Balance ::"<<endl;
			cout<<balance<<endl;
		}
    	
	
};


int main()
{   
    int choice,back;
    
    
    int acc,bal;
    string name,type;
    cout<<"BANK ACCOUNT "<<endl;
    cout<<"Enter Name "<<endl;
    cin>>name;
    cout<<"Enter Account Number"<<endl;
    cin>>acc;
    cout<<"Enter the type of account "<<endl;
    cin>>type;
    cout<<"Enter the balance"<<endl;
    cin>>bal;
    
    Bank_Account b(name,acc,type,bal);

    do{

	cout<<endl<<"Welcome to Bank"<<endl;
	cout<<"1.DEPOSIT"<<endl;
	cout<<"2.WITHDRAW"<<endl;
	cout<<"3.DISPLAY DETAILS"<<endl;
	cout<<"4.EXIT"<<endl;
	cout<<"Enter the number corresponding to the desired operation ::"<<endl;
	cin>>choice;
	cout<<endl;
	
	switch(choice)
	{
		case 1:
			int deposit;
			cout<<"Enter the deposit amount "<<endl;
			cin>>deposit;
			b.deposit(deposit);
			break;
			
		case 2:
			int withdraw;
			cout<<"Enter the withdrawal amount"<<endl;
			cin>>withdraw;
			b.withdraw(withdraw);
			break;
			
		case 3:
			b.display();
			break;
		default:
			exit(0);
			break;
	
	}
	
	cout<<endl<<"Press 1 to go back to menu"<<endl;
	cout<<"Press Any other KEY to exit"<<endl;
	cin>>back;
    }while(back==1);
	
	return 0;
}