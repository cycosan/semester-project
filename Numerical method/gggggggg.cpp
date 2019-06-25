#include<malloc.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
struct node{
  int data;
  struct node *next;


};
typedef struct node Node;
void  push(Node **,int);
int pop(node **);
void printstack(node *);
int main()
{
  node *top=NULL;
  int choice,decision=1,info;
  printf("1.push\n2.pop\n3.exit\n");
  while(1)
    {
          printf("\nenter ur choice");
      scanf("%d",&choice);
      switch(choice)
      {
      case 1:
            printf("enter the item to be pushed:");
            scanf("%d",&info);
            push(&top,info);
            printstack(top);
            break;
      case 2:
             if(top==NULL)
             printf("stack is empty\n");
             else
             printf("the poped item is:%d\n",pop(&top));
             printstack(top);
             break;
             case 3:exit(0);
             default:printf("enter the value from 1 to3\n");

    }
}
 getch();
 return 0;
}
void push(Node **topPtr,int a)
{
Node *newNode;
newNode=(Node*)malloc(sizeof(Node));
if(newNode==NULL)
printf("cannot create node\n");
else{
     newNode->data=a;
     newNode->next=*topPtr;
     *topPtr=newNode;
     

     }
}

int pop(Node **topPtr)
{
   Node *temp;
   int a;
   temp=*topPtr;
   a=temp->data;
   *topPtr=temp->next;
   free(temp);
   return a;
}
void printstack(Node *temp)
{
  printf("elements in stack:\n");
  while(temp!=NULL)
  {

 printf("%d-->",temp->data);
 temp=temp->next;
 }
 printf("NULLL");
}


