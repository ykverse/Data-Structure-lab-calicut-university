#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 30
struct poly
{
 int coeff;
 int exp;
}term[MAX];
void polyadd(int af,int al,int bf,int bl,int free);
char compare(int a, int b);
int newterm(int a, int b,int fsize);
void main()
{
 int i,j,num1,num2,free;
 int af,al,bf,bl;

 printf("\nYEDHUKRISHNA A.M \n NMAXSCS030\n");

 printf("Enter the number of terms of the first polynomial \n");
 scanf("%d",&num1);
 printf("Enter the coefficents and exponents of the first polynomial\n");
 for(i=0; i<num1; i++) {
 scanf("%d",&term[i].coeff);
 scanf("%d",&term[i].exp);
 }
 printf("Enter the number of terms of the second polynomial\n");
 scanf("%d",&num2);
 free = (num1+num2);
  printf("Enter the coefficents and exponents of the second polynomial\n");
 for(i=num1; i<free; i++) {
 scanf("%d",&term[i].coeff);
 scanf("%d",&term[i].exp);
 }
 printf("Entered polynomials are:\n");
 i=0;
 while(i<num1)
 {
 printf("%dx^%d ",term[i].coeff,term[i].exp);
 i++;
 if(i==num1)
 break;
 printf("+ ");
 }
 printf("\n");
 i=num1;
 while(i<free)
 {
 printf("%dx^%d ",term[i].coeff,term[i].exp);
 i++;
 if(i==free)
 break;
 printf("+ ");
 }
 printf("\n");
 af=0;al=num1-1;bf=num1;bl=free-1;
 polyadd(af,al,bf,bl,free);
}
void polyadd(int af,int al,int bf,int bl,int free)
{
 int p,i,q,e,sum=0,free1;
 free1 = free; // copying the initial value of free into free1
 p = af; // copying first position of the first polynomial to p, so that the original position is
 q = bf; // copying first
 while((p<=al)&&(q<=bl)) // p and q used for traversing in the structure
 {
 switch(compare(term[p].exp,term[q].exp)) // comparing both terms
 {
 case '=':
 {
 sum = term[p].coeff + term[q].coeff;
 if(sum!=0) // If the sum of the two coefficients is zero than no need for displaying
 {
 free =newterm(sum,term[p].exp,free);// can pass either p or q because both are
 p++; // for next element
 q++; // for next element
 }
 break;
 }
 case '>': // term[p].exp > term[q].exp
 {
 free =newterm(term[p].coeff,term[p].exp,free);
 p++;
 break;
 }
 case '<': // term[p].exp < term[q].exp
 {
 free = newterm(term[q].coeff,term[q].exp,free);
 q++;
 break;
 }
 }
 }
 while(p<=al)
 {
 free = newterm(term[p].coeff,term[p].exp,free);
 p++;
 }
 while(q<=bl)
 {
 free = newterm(term[q].coeff,term[q].exp,free);
 q++;
 }
 printf("Resultant Polynomial is:\n");
 i=free1; // orignal value of free
 while(i<free)
 {
 printf("%dx^%d ",term[i].coeff,term[i].exp);
 i++;
 if(i==free)
 break;
 printf("+ ");
 }
 printf("\n");
}
char compare(int a,int b)
{
    if(a==b)
 return '=';
 else if(a>b)
 return '>';
 else
 return '<';
}
int newterm(int a, int b,int fsize )
{
 if (fsize >= MAX)
 {
 printf("Space is insufficent\n");
 exit(0);
 }
 else
 {
 term[fsize].coeff = a;
 term[fsize].exp = b;
 fsize++;
 return fsize;
 }
}