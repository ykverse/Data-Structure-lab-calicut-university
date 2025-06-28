#include<stdio.h>
#include<conio.h>
#define MAX 100
int stack[MAX],top=0;
void push(int);
void pop();
void display();
int full();
int empty(); 
void main()
{
int y=1,ch,item;
clrscr();
printf("Yedhukrishna A.M \n NMAXSCS030 \n");
while(y==1)
{
printf("\n1.Push \n2.Pop \n3.Display");
printf("\nenter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\nenter the item");
scanf("%d",&item);
push(item);break;
case 2:pop();break;
case 3:display();break;
default:printf("\nInvalid choice");
}
printf("\nDo you want to continue enter 0 or 1:");
scanf("%d",&y);
}
getch();
}
void push(int item)
{
if(full())
{
printf("\n stack Overflow");
}
else
{
stack[top]=item;
top++;
}}
int full()
{
if(top>=MAX)
return 1;
else
return 0;
}
void pop()
{
int item;
if(empty())
{
printf("\nStack underflow");
}
else
{
top--;
item=stack[top];
printf("\npopped item=%d",item);
}}
int empty()
{
if(top<=0)
return 1;
else
return 0;
}
void display()
{
int i;
if(empty())
{
printf("\nStack Underflow");
}
else 
{
printf("\nElements of stack:");
for(i=top-1;i>=0;i--)
{
printf("\n %d",stack[i]);
}}}