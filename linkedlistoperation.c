#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* link;
};
struct node* create(int data)
{
struct node* head=NULL;
struct node* newnode=malloc(sizeof(struct node));
printf("enter the data to the node");
scanf("%d",&newnode->data);
newnode->link=NULL;
return node;
}
void insert(struct node** head,int data)
{
struct node* newnode=malloc(sizeof(struct* node));
if(*head==NULL)
{
*head=newnode;
}
  else
{
for(int i=0;i<data;i++)
{
printf("enter the element to be inserted:");
scanf("%d",temp->data);
temp=temp->link;
temp=*head;
}
  printf("\n");
}
}
void display(struct node* head)
{
struct node* temp=head;
printf("the elements are:\n");
printf("%d",temp->data);
temp=temp->link;
}
int main()
{
struct node* head;
head=create();
insert(&head);
display();
return 0;
}
