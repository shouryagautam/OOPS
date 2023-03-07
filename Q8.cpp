#include<iostream>
using namespace std;

class Distance{
	int feet;
	int inches;
	
	public:
		Distance()
		{
			feet = 0;
			inches =0;
		}
		
		Distance(int f,int in)
		{
			feet = f;
			inches = in;
			
		}
		
		void getdata()
		{
			cout<<"Enter the distance in feets"<<endl;
			cin>>feet;
			
			cout<<"Enter the distance in inches"<<endl;
			cin>>inches;
		}
		
		void show()
		{
			//cout<<"The distance :"<<endl;
			cout<<feet<<" ft. "<<inches<<" in."<<endl;
		}
		
		bool operator<(Distance d2)
		{
			if(feet<d2.feet)
			return true;
			else if(inches<d2.inches)
			return true;
			else return false;
			
		}
		
		Distance operator+=(Distance d2)
		{
			feet+=d2.feet;
			inches+=d2.inches;
			
			return *this;
			
		}
	
	
};


int main()
{
	Distance d1(10.0,45.0),d2;
	
	
	cout<<"The given distance :"<<endl;
	d1.show();
	
	d2.getdata();
	
	if(d1<d2)
	{
		cout<<"The input distance is greater"<<endl;
	    d2.show();
	}
	else
	{
	    cout<<"The given distance is greater"<<endl;
        d1.show();
	}
	
	cout<<endl<<"The added distance::"<<endl;
	d1+=d2;
	d1.show();
	
	return 0;
}