#include<stdio.h>
#include<stdlib.h>
int front=0;
int rear=-1;
int queue[100];
void enqueue(int ele)
{
if(rear==size-1)
{
printf("the queue is full\n");
}
else
{
rear++;
queue[rear]=ele;
}
printf("%d pushed to queue\n",ele);
}
void dequeue()
{
if(front==-1&&rear==-1)
{
printf("the queue is empty\n");
}
else
{
front++;
}
printf("deleted an element\n");
}
void display()
{
if(front>rear)
{
printf("queue is emnpty\n");
}
else
{
    printf("the elements are:\n");
for(int i=front;i<=rear;i++)
{
printf("%d\n",queue[i]);
}
printf("\n");
}
}
int main()
{
int ch;int ele;
do
  {
printf("enter 1  for insertion\n");
printf("enter 2 for deletion\n");
printf("enter 3 for display\n");
printf("enter 4 for exit\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter the element to be inserted\n");
scanf("%d",&ele);
enqueue(ele);
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
printf("exit");
break;
default:
printf("invalid chocie");
break;
}
}
while(ch!=4);
return 0;
}
