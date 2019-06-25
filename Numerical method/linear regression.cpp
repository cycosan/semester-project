//linear regresssion ,least square method
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,j;
	float x[10],y[10],sumx,sumy,sumxy,sumxx,a=0.0,b=0.0;
   cout<<"Enter the number of data points:";
   cin>>n;
   for(i=0;i<n;i++)
    {
   	cout<<"Enter data for x:"<<endl;
   	cin>>x[i];
   	cout<<"Enter data for y:"<<endl;
    cin>>y[i];
   
    }
   	

   for(i=0;i<n;i++)
   {
    sumx+=x[i];
    sumy+=y[i];
   	sumxy+=x[i]*y[i];
   	sumxx+=x[i]*x[i];
   }
      b=(n*sumxy-sumx*sumy)/(n*sumxx-sumx*sumx);
      a=sumy/n-(b*sumx)/n;
      cout<<"The value of a is:"<<a<<endl;
      cout<<"The value of b is:"<<b<<endl;
      cout<<"The equation is of the form: Y="<<a<<"+"<<b<<"x"<<endl;
	getch();
	return 0;    
}
