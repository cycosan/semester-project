#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 10
float stack[max];
int top=-1;
void push(float);
float pop();
int main()
{
char postfix[max];
float a,b,result;
int i=0;
printf("enter the postfix expression");
gets(postfix);
while(postfix[i]!='\0')
  {
  switch(postfix[i])
  {
  case'+':
  b=pop();
  a=pop();
  result=a+b;
  push(result);break;
  case'-':                  
    b=pop();
     a=pop();
     result=a-b;
      push(result);break;
   case'*':
  b=pop();
  a=pop();
  result=a*b;
  push(result);break;
   case'/':
  b=pop();
  a=pop();
  result=a/b;
  push(result);break;
  default:push(postfix[i]-48);
  }
  i++;  
  printf("the result is :%f\n",stack[top]);                     
  } 
    
getch();
return 0;
}
void push(float a)
{
    
stack[++top]=a;
}
float pop()
{
float a;
a=stack[top];
top--;
return a;
}
