#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],item,found=0,rows,cols,i,j;
clrscr();
printf("Yedhukrishna A.M \n NMAXSCS030 \n");
printf("enter the order of 2D array");
scanf("%d%d",&rows,&cols);
printf("Enter the values of array");
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
scanf("%d",&a[i][j]);
}}
printf("Enter the search value");
scanf("%d",&item);
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
if(item==a[i][j])
{
found=1;
printf("Search value found in array at index %d %d th position",i,j);
break;
}
}
}
if(found==0)
printf("Search value not found in array");
getch();
}