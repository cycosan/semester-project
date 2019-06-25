#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define maxsize 5
struct queue
{
int a[maxsize],front,rear;

}s;
void enqueue();
void dequeue();
void display();
int main()
{
s.front=0;
s.rear=-1;
printf("1.enqueue\n");
printf("2.dequeue\n");
printf("3.display\n");
printf("4.exit\n");
int choice;  
 while(1)
 {
         printf("enter choice");
scanf("%d",&choice);
 switch(choice)
 {
       case 1:enqueue();break;
       case 2:dequeue();break;
       case 3:display();break;
       case 4:exit(0);
       default:printf("enter number from 1 to 3");
}        
}
getch();
return 0; 
}
void enqueue()
{
     int item;
  if (s.rear==maxsize-1)
  printf("\nthe queue is overflow");
  else 
  {
  s.rear++;
   printf("enter item");
  scanf("%d",&item);
  s.a[s.rear]=item;
  }
}

void dequeue()
{
     int item,i;
if(s.rear==-1)
printf("\n queue is underflow");
else
  {
    item=s.a[s.front];
    printf("%d",item);
    for(i=0;i<s.rear;i++)
    {
    s.a[i]=s.a[i+1];                   
     }
    s.rear--;
    }
}
void display()
{
     int i;
     for(i=s.front;i<=s.rear;i++)
     printf("\n[%d]",s.a[i]);
     }
