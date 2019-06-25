#include<iostream>
#include<conio.h>
using namespace std;
class Times
{
int hr;
int mins;
int sec;
public:Times(){}

public:Times(int h,int m,int s)
{
hr=h;
mins=m;
sec=s;
}

Times add(Times b)
{
hr=hr+b.hr;
mins=mins+b.mins;
sec=sec+b.sec;
if (sec>=60)
{
mins=mins+1;
sec=sec-60;

}

if (mins>60)
{
	hr=hr+1;
mins=mins-60;
}
}
void show ()
{
cout<<"the requrired time is ";
cout<<hr<<":"<<mins<<":"<<sec;
}
~Times(){}
};
int main()
{
Times t1(2,45,60);
Times t2(3,45,54);
Times t;
t=t1.add(t2);
t.show();
getch();
return 0;
}


