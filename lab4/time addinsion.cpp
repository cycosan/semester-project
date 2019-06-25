#include<iostream>
#include<conio.h>
using namespace std;
class Time{
int hr;
int mins;
int sec;
public:Time()
{
	hr=0;
	mins=0;
	sec=0;
	
	
}
Time(int h,int m,int s)
{
hr=h;
mins=m;
sec=s;
}

void add(Time &a,Time &b)
{
hr=a.hr+b.hr;
mins=a.mins+b.mins;
sec=a.sec+b.sec;
if (sec>=60)
{
mins=mins+1;
}

if (mins>60)
{
	hr=hr+1;

}
}
void show ()
{
cout<<"the requrired time is ";
cout<<hr<<":"<<mins<<":"<<sec;
}
};
int main()
{
Time t1(2,45,60);
Time t2(3,45,54);
Time t3;
t3.add(t1,t2);
t3.show();
getch();
return 0;
}


