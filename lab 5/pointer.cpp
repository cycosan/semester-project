//in above class vreate a memebr funcion to add object and return object as a return type using 1)temeportary object 2)using namelesss object
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
      weight sum(weight a,weight b);
      ~weight(){
      }
   };
   int main()
   {
   weight w(2,45);
   weight w1(2,56);
   weight *w3;
   w3=&w;
   w3->sum(w,w1);
   w3->show();
   getch();
   return 0;
   }
   
   weight weight::sum(weight a,weight b)
   {
   
   kilo=a.kilo+b.kilo;
   gra=a.gra+b.gra;
   
   }
