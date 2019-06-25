// create a class dname woeght that represent weright in kilo and gra calss should have member fnction to add two object of this class as a agrument and return it to third object 
#include<iostream>
#include<conio.h>
using namespace std;
  class weight
  {
  	float kilo;
  	float gra;
  	public:weight(){kilo=gra=0;}
  	weight(float k,float g){
  	   kilo=k;
  	   gra=g;
      }
      void show()
      {
      cout<<"enter the value of kg and gram";
      cout<<kilo<<endl<<gra;
      }
      void sum(weight x,weight y);
      
      
      ~weight(){}
    
  	};
  	
  	int main()
  	{
  	  weight t(4,45);
      weight t1(3,56);
       
       weight t3;t3.sum(t,t1);
       t3.show();
      
      getch();
       return 0;
	  
	  
	  }
	 void weight::sum(weight x,weight y)
	  
	  {
      kilo=x.kilo+x.gra;
      gra=y.gra+y.gra;
     }
	  
	  
	  
	  
	  
  	
  	
