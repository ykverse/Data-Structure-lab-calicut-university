#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[20][20], temp[20][20];
int i, j, count;
clrscr();
printf("Yedhukrishna A.M \n NMAXSCS030 \n");
printf(“Enter the no. of strings:”);
scanf(“%d”, &count);
printf(“Enter the strings:”);
for (i=0; i<count; i++)
scanf(“%d”, &str[i]);
for (i=0; i<count; i++)
{
for (j=i+1; j<count; j++)
{
if (strcmp(str[i], str[j]) >0)
{
strcpy(temp[i], str[i]);
strcpy(str[i], str[j]);
strcpy(str[j], temp[i]);
}
}
}
printf(“String after sorting:”);
for (i=0; i<count; i++)
{
printf(“%s”, str[i]);
}
getch();
} 
