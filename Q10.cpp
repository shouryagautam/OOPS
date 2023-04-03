#include<iostream>
#include<math.h>
using namespace std;
  
class Distance{
      int x;
      int y;
      
      //to store the value of origin
      static int xo;
      static int yo;
 
      public:
        Distance(){
            x=0;
            y=0;
            
        }
 
        static void getOrigin();
 
        void getCord(){
            cout<<"Enter the x co-ordinate of the point"<<endl;
            cin>>x;
            cout<<"Enter the y co-ordinate of the point"<<endl;
            cin>>y;
        }
 
        float getDist(){
            return sqrt(pow(x-xo,2)+pow(y-yo,2));
        }
 
  };
  
int  Distance::xo=0;
int  Distance::yo=0;
 
  void Distance::getOrigin(){
              cout<<"Enter the x co-ordinate of origin:"<<endl;
              cin>>xo;
              cout<<"Enter the y co-ordinate of origin:"<<endl;
              cin>>yo;
              
  }
 
 
 
  int main(){
 
      Distance::getOrigin();
      Distance d1,d2;
      
      cout<<endl<<"FIRST POINT"<<endl;
      d1.getCord();
      cout<<endl<<"SECOND POINT"<<endl;
      d2.getCord();
      
 
      cout<<endl<<"The Distance between first point and origin::"<<endl<<d1.getDist()<<endl;
      cout<<endl<<"The Distance between second point and origin::"<<endl<<d2.getDist()<<endl;
     }
