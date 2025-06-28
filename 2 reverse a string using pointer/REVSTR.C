#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
char *ptr;
int len=0,i;
printf("Yedhukrishna A.M \n NMAXSCS030 \n");
printf("Enter the string :");
gets(str);
ptr=str;
for(i=0;str[i]!='\0';i++)
{
len++;
ptr++;
}
Printf("\n Reversed String is ");
for(i=len;i>=0;i--,ptr--)
{
printf("%c",*ptr);
}
getch();
}