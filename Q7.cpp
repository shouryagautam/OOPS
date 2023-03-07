#include<iostream>
using namespace std;

class complex{
	float real;
	float imag;
	
	public:
		complex(){
			real=0.0;
			imag=0.0;
		}
		
		complex(int x,int y){
			real=x;
			imag=y;
		}
	    	
		void disp()
        {
	       cout<<"The complex number ::"<<endl;
	       cout<<real<<" +i"<<imag<<endl;
        }
	
	    //friend complex operator+(complex,complex);
	    complex operator+(complex b)
	    {
	    	complex c;
	    	c.real=real+b.real;
	    	c.imag=imag+b.imag;
	    	
	    	return c;
		}	
	
};

/*	
    complex operator+(complex a,complex b)
	{
		complex c;
		c.real = a.real + b.real;
		c.imag = a.imag + b.imag;
		
		return c;
	}
*/	
	

int main(){
	
	int img,real;
	complex res;
	
	cout<<"Enter the real part of the number"<<endl;
	cin>>real;
	cout<<"Enter the complex part of the number"<<endl;
	cin>>img;
	
	complex a(real,img);
	
	cout<<"Enter the real part of the number"<<endl;
	cin>>real;
	cout<<"Enter the complex part of the number"<<endl;
	cin>>img;
	
	complex b(real,img);
	
	(a+b).disp();
	
		
	return 0;
}