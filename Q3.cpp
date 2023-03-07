#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

class Bank_Account{
	
	string name;
	string userId;
	string password;
    int accNo;
    string accType;
    int balance;
    
    public:
    	
    	Bank_Account(string n,int acc,string type, int bal,string id, string pass){
    		
    		name = n;
    		accNo = acc;
    		accType = type;
			balance = bal;
			userId = id;
			password = pass;	
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
		
		string getId()
		{
			return userId;
		}
		
		string getpass(){
			return password;
		}
    	
	
};


int main()
{   
    int choice,back;
    
    
    int acc,bal;
    char c;
    string name,type,id,pass="";
    cout<<"BANK ACCOUNT REGISTRATION"<<endl;
    cout<<"Enter Name "<<endl;
    cin>>name;
    cout<<"Enter Account Number"<<endl;
    cin>>acc;
    cout<<"Enter the type of account "<<endl;
    cin>>type;
    cout<<"Enter the balance"<<endl;
    cin>>bal;
    cout<<"Enter the USER ID "<<endl;
    cin>>id;
    cout<<"Enter the password"<<endl;
    
    while((c=getch())!='\r')
    {
    	pass = pass + c;
    	cout<<"*";
	}
	
	cout<<endl;
    
    Bank_Account b(name,acc,type,bal,id,pass);
    
    do{
	
    id=pass="";
    cout<<endl<<"::LOGIN::"<<endl;
    cout<<"Enter the USER ID "<<endl;
    cin>>id;
    cout<<"Enter the password"<<endl;
    
    while((c=getch())!='\r')
    {
    	pass = pass + c;
    	cout<<"*";
	}
	
	
    if(id==b.getId()&&pass==b.getpass())
    {
	
    
    do{
    	
    back=0;
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
    
    back=1;
    
    }
    
    else{
    	cout<<endl<<"Wrong id or password"<<endl;
    	cout<<"Press 1 to go back"<<endl;
    	cout<<"Press any other KEY to exit"<<endl;
    	cin>>back;
    	
	}
    
    }while(back==1);
	
	return 0;
}