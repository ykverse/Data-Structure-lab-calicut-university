#include<stdio.h>
#include<conio.h>
int pattern(char str[],char sub[]);
void main()
{
char str[30],sub[30];
int i;
clrscr();
printf("Enter the string:");
gets(str);
printf("Enter the sub string:");
gets(sub);
i=pattern(str,sub);
if(i== -1)
printf("\nSubstring is not present");
else
printf("\nSubstring is present at position %d ",i);
getch();
}
int pattern(char str[ ],char sub[ ])
{ int i,j,k,L;
L=strlen(sub);
for(i=0;str[i]!='\0';i++)
{
k=i;
for(j=0;j<=L-1;j++)
{
if(str[k]!=sub[j])
break;
k++;
}
if(j= =L)
return i;
}
return -1;
}