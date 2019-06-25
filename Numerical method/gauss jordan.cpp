#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
int n,k,i,j,l;
float a[10][10],x[10];
cout<<"enter the order of matrix";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=n+1;j++)
{
  cin>>a[i][j]; 
}              
}
for(k=1;k<=n;k++)
{
  for(l=k+1;l<=n+1;l++)
  {
   a[k][l]=a[k][l]/a[k][k];                   
  }                 
   a[k][k]=1;              
  for(i=1;i<=n;i++)
  {
  if(i!=k)
        {
        for(j=k+1;j<=n+1;j++)
        a[i][j]=a[i][j]-(a[k][j]*a[i][k]);
        }
  }               

}
for(i=1;i<=n;i++)
{
x[i]=a[i][n+1];    
cout<<x[i]<<endl;    
}    
getch();
return 0;
}
