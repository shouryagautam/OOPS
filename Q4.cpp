#include<iostream>
using namespace std;

class Time{
	int hour;
	int min;
	
	public:
		void input()
		{
			cout<<"Enter the HOURS ::"<<endl;
			cin>>hour;
			cout<<"Enter the MINUTES ::"<<endl;
			cin>>min;
			
		}
		
		void gettime(int hr,int mn)
		{
			hour=hr;
			min=mn;
			
		}
		
		Time sum(Time &T2)
		{
			Time sumTIME;
			sumTIME.hour= hour + T2.hour;
			sumTIME.min= min + T2.min;
			
			if(sumTIME.min>60)
			{
				sumTIME.min = sumTIME.min % 60;
				sumTIME.hour++;
			}
			
			return sumTIME;
		}
		
		void display()
		{
			cout<<"The TIME after summing is ::"<<endl;
			cout<<hour<<" hrs : "<<min<<" min"<<endl;
			
		}
	
};

int main()
{
	Time T1,T2,T3;
	int hr,mn;
	
	cout<<"Enter the hours :"<<endl;
	cin>>hr;
	cout<<"Enter the minutes :"<<endl;
	cin>>mn;
	
	T1.gettime(hr,mn);
	T2.input();
	
	T3=T1.sum(T2);
	T3.display();
	
	return 0;
}