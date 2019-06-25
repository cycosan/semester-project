//in above class create a memeber funcion to add object and return object as a return type using freind function
#include<iostream>
#include<conio.h>
using namespace std;
  class weight
  {
  	float kilo;
  	float gra;
  	public:weight(){
	  gra=0;
	  kilo=0;
	  
	  }
  	weight(float k,float g){
  	   kilo=k;
  	   gra=g;
      }
      void show()
      {
      cout<<"enter the value of kg and gram"<<endl;
      cout<<kilo<<endl<<gra;
      }
      friend weight sum(weight a,weight b);
      ~weight(){
      }
   };
   int main()
   {
   weight w(2,45);
   weight w1(2,56);
   weight w3;
   w3=sum(w,w1);
   w3.show();
   getch();
   return 0;
   }
   
   weight sum(weight a,weight b)
   {
   float x,y;
   x=a.kilo+b.kilo;
   y=a.gra+b.gra;
   return weight(x,y);
   }
