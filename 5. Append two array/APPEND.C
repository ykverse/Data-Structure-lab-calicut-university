#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],b[20],c[40],m,n,i,j;
clrscr();
printf("Yedhukrishna A.M \n NMAXSCS030 \n"); 
printf("Enter the limit of first array:");
scanf("%d",&m);
printf("\nEnter the limit of second array:");
scanf("%d",&n);
printf("\n Enter the elements of first array");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
printf("\nEnter the elements ofsecond array");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
printf("\n Array elements after appending");
for(i=0;i<m;i++)
{
c[i]=a[i];
}
for(j=0;j<n;j++,i++)
{
c[i]=b[j];
}
for(i=0;i<m+n;i++)
printf("%d\t",c[i]);
getch();
}