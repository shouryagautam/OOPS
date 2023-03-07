#include<iostream>
using namespace std;

class IsEven{
	int num;
	
	public:
		IsEven(int n){
		    num=n;
	   }
	
	    void show(){
		    cout<<"The number:"<<endl;
		    cout<<num;
	   }
	
	    bool operator!();
	 
	
};

bool IsEven::operator!()
{
	if(num%2==0)
	return true;
	else return false;
}

int main()
{   
    int ch,n;
    do{
    	cout<<"Enter the number"<<endl;
    	cin>>n;
    	
    	IsEven number(n);
    	
    	if(!number==true)
    	cout<<"The number is even"<<endl;
    	else
    	cout<<"The number is odd"<<endl;
    	
    	cout<<endl<<"Do you want to enter more(Press 1)"<<endl;
    	cin>>ch;
	}while(ch==1);
	
	return 0;
}