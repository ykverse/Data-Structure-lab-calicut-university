#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5][5],b[20][3],i,j,k,r,c;
 clrscr();
 printf("\nYEDHUKRISHNA A.M \n NMAXSCS030\n");
 printf("\nEnter the order of matrix :");
 scanf("%d%d",&r,&c);
 printf("\nEnter the matrix :");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 k=1;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   if(a[i][j]!=0)
   {
    b[k][0]=i;
    b[k][1]=j;
    b[k][2]=a[i][j];
    k++;
   }
  }
 }
 b[0][0]=r;
 b[0][1]=c;
 b[0][2]=k-1;
 printf("Triplet representation :\n");
 for(i=0;i<k;i++)
 {
  printf("%d\t%d\t%d\n",b[i][0],b[i][1],b[i][2]);
 }
 getch();
}
