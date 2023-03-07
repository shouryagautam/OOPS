#include<iostream>
using namespace std;

class largest{
	int a;
	int b;
	int c;
	
	public:
	largest(int x,int y,int z)
	{
		a=x;
		b=y;
		c=z;
	}
	
	int large()
	{
		if(a>b&&a>c)
		return a;
		
		if(b>c&&b>a)
		return b;
		
		if(c>a&&c>b)
		return c;
	}
	
	
};


int main()
{   
    int x,y,z;
    
    cout<<"Enter the first number"<<endl;
    cin>>x;
    cout<<"Enter the second number"<<endl;
    cin>>y;
    cout<<"Enter the third number"<<endl;
    cin>>z;
    
    largest lar(x,y,z);
    
    cout<<"The largest number :"<<lar.large();
    
	return 0;
}