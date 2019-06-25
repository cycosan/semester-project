#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define maxsize 4 
struct 
{
int front,rear;
int a[maxsize];
}s;
void enqueue();
void dequeue();
void display();
int main()
{
 s.front=-1;
 s.rear=-1;    
   printf("1.enqueue");
   printf("\n2dequeue");
   printf("\n3.display");
   printf("\n4.exit");
   int choice;
   while(1)
     {
            printf("\nenter choice");
     scanf("%d",&choice);
     switch(choice)
         {
             case 1:enqueue();break;
             case 2:dequeue();break;
            case 3:display();break;
             case 4:exit(0);break;
             default:printf("enter number from 1 to 3 please");
         }
     
     
     }       
    getch();
    return 0;
}

void enqueue()
{
     int item;
if(s.rear==-1)
    {
    s.front=0;
    s.rear=0;
    printf("enter item");
     scanf("%d",&item);
       s.a[s.rear]=item ; 
       }     
    else if (s.front==(s.rear+1)%maxsize)
    printf("queue is full");
    else
      {
      s.rear=(s.rear+1)%maxsize;
      printf("enter item");
      scanf("%d",&item);
      s.a[s.rear]=item;
      }
      
    

}
void dequeue()
{
     int item;
if (s.rear==-1)
  printf("queue is empty");
  else{
  item=s.a[s.front];
   printf("the dqueued item is %d from index %d",item,s.front);
}
   if (s.front==s.rear)
   
   {
   s.front=-1;
   s.rear=-1;
   }
   else 
   s.front=(s.front+1)%maxsize;
   
       
     
}
void display()
{
int i;
if(s.rear<s.front)
  {
     for(i=s.front;i<maxsize;i++)
     printf("[%d] ",s.a[i]);
     for(i=0;i<=s.rear;i++)
      printf("[%d] ",s.a[i]);
    }
     else
     {for(i=s.front;i<=s.rear;i++)
      printf("[%d] at index %d ",s.a[i],i);
     
   }
}


