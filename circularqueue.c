#include<stdio.h>
#include<stdlib.h>
#define size 100
int queue[100];
int front=0;
int rear=-1;
void enqueue(int ele)
{
if((rear+1)%size==front-1)
{
printf("the queue is full\n");
}
else
{
rear=(rear+1)%size;
queue[rear]=ele;
}
printf("%d is pushed to queue\n",ele);
}
void dequeue()
{
if(front==(rear+1)%size)
{
printf("the queue is empty\n");
}
else
{
front=(front+1)%size;
}
printf("an element is deleted successfully\n");
}
void display()
{
  if(front==(rear+1)%size)
{
printf("the queue is empty\n");
}
else
{
for(int i=front;i<size-1;i++)
{
if(i<=rear)
{
printf("%d\n",queue[i]);
}
}
}
}
int main()
{
int ch;
int ele;
do
{
printf("enter 1 for insertion\n");
printf("enter 2 for deletion\n");
printf("enter 3 for display\n");
printf("enter 4 for exit\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter the element to be inserted:\n");
scanf("%d",&ele);
enqueue(ele);
break;
case 2:
dequeue();
break;
case 3:
printf("the elements are:\n");
display();
break;
case 4:
printf("exit");
break;
default:
printf("invalid choice");
break;
}
}
while(ch!=4);
return 0;
}

