#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{ 
    int data;
struct node *link;
}nodes;
void push(int);
void pop();
void display();
nodes *top=NULL;
void main()
{
int y=1,ch,item;
clrscr();
printf("Yedhukrishna A.M \n NMAXSCS030 \n");
while(y==1)
{
printf("\n1.Push\n 2.pop\n3.display");
printf("\nenter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\nEnter the item");
scanf("%d",&item);
push(item);
break;
case 2:pop( );break;
case 3:display( );break;
default:printf("\n invalid choice");
}
printf("\n Do you want to continue enter 0 or 1:");
scanf("%d",&y);
}
getch();
}
void push(int item)
{
nodes *x;
x=(nodes*)malloc(sizeof(nodes)); 
if(top==NULL)
{
x->link=top;
top=x;
}
else
{
x->link=top;
top=x;
}
x->data=item;
}
void pop()
{
nodes *x=top;
int item;
if(top==NULL)
{
printf("\nUnderflow");
}
else
{
item=top->data;
top=top->link;
printf("\n Popped item=\t%d",item);
}
}
void display()
{
nodes *x=top;
if(x==NULL)
{
printf("\nUnderflow");
}
else 
{
printf("\n items of stack:");
while(x!=NULL)
{
printf("%d\n ",x->data);
x=x->link;
}}}