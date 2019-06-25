//composite simpson
#include<iostream>
#include<conio.h>
#define f(x) (x*x*x+1)
using namespace std;
int main()
{
	int i;
	float a,b,n,sum1=0,sum2=0,xi,h,ics;
	cout<<"Enter the value of a,b and n:"<<endl;
	cin>>a>>b>>n;
	h=(b-a)/n;
	for(i=0;i<n;i++)
	{
		xi=a+i*h;
		if((i%2)==0)
		{
			sum2+=2*f(i);
		}
		else
		sum1+=4*f(i);
	}
	ics=(h/3)*(f(a)+sum1+sum2+f(b));
	cout<<"The value of ics is:"<<ics;
	getch();
	return 0;
}
