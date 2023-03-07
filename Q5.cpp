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
		
		complex(int x){
			real=x;
			imag=x;
		}
		
		complex(int x,int y){
			real=x;
			imag=y;
		}
	    
		friend complex addComplex(complex &,complex &);
		friend void display(complex &);
		
		void disp()
        {
	       cout<<"The complex number ::"<<endl;
	       cout<<real<<" +i"<<imag<<endl;
        }
				
};

complex addComplex(complex &C1,complex &C2)
{
	complex C3;
	C3.real = C1.real + C2.real;
	C3.imag = C1.imag + C2.imag;
	
	return C3;
}

void display(complex &C)
{
	cout<<"The resultant complex number ::"<<endl;
	cout<<C.real<<" +i"<<C.imag<<endl;
}


int main(){
	
	int rl,im,rlim;
	
	cout<<"Enter the Real Part of the complex number :: "<<endl;
	cin>>rl;
	
	cout<<"Enter the imaginary part of the complex number ::"<<endl;
	cin>>im;
	
	complex c1(rl,im);
	c1.disp();
	
	cout<<"Enter the Complex Number (Real = Imaginary) ::"<<endl;
	cin>>rlim;
	
	complex c2(rlim);
	c2.disp();
	
	complex c3;
	c3=addComplex(c1,c2);
	display(c3);
		
	return 0;
}

