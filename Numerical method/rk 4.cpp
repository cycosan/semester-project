#include<iostream>
#include<conio.h>
#include<math.h>
#define f(x,y) (2*y/x)
using namespace std;
int main()
{
    int i;
 float xo,yo,h,xp,n,m1,m2,m3,m4,m,y1,x1;
 cout<<"enter the value of xo,yo,h";
 cin>>xo>>yo>>h;
 cout<<"enter the value of xp";
 cin>>xp;
 n=(xp-xo)/h;
for(i=1;i<=n;i++)
{
m1=f(xo,yo);
m2=f((xo+h/2),(yo+(h/2)*m1));
m3=f((xo+h),(yo+(h/2)*m2));
m4=f((xo+h),(yo+m3*h));
m=(m1+2*m2+2*m3+m4)/6;
y1=yo+m*h;
x1=xo+h;
xo=x1;
yo=y1;
}
cout<<"the vaue of \n";
cout<<yo;
getch();
return 0;
}