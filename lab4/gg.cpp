//create a class time that consisits of interzer members for hours minustes sec the construcuttor shoukd initixe the data to 0 . another contructor should 0intial to fixed values write memeber function display time that should display in time fotmat hr:min:sec
#include<iostream>
#include<conio.h>
using namespace std;
class time 
      {
      
	  int hours;
       int minutes;
       int seconds;

 public: time()
  {
  hours=0;
  minutes=0;
  seconds=0;
  }

  
  
time (int hr,int min,int sec);
void get()
{
	cout<<"enter the time";
 cin>>hours>>minutes>>seconds;
}


void show ()
{
cout<<"the requrired time is ";
cout<<hours<<":"<<minutes<<":"<<seconds;
}

~time();


};
int main()
{
	time t;
	time t6;
time t1(2,30,30);
time t2(3,50,60);
t6.get();
t.show();

t1.show();
t2.show();
time t4=t2;
time t5(t2);
t4.show();
t5.show();
t6.show();
getch();
return 0;



}
time ::time(int hr,int min,int sec) 
{
	hours=hr;
	minutes=min;
	seconds=sec;
}
time ::~time()
{
cout<<"aaaaaaaa"<<endl;
}
