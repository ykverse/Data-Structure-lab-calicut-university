#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h>
#define MAX 25
  int queue[MAX];
  int front=-1,rear=-1;



  //function to add an element
    void add(){
      int value;
      clrscr();
      printf("\n Yedhukrishna A.M \n NMAXSCS030\n");
      if(rear==MAX-1){
 printf("\n Queue Overflow! cannot add more elements");
 }else{
   if(front==-1){
     front=0;
    }
   printf("\n Enter the values to the enqueue\n: ");
   scanf("%d",&value);
   rear++;
   queue[rear]=value;
   printf("Element %d enqueued into the queue.\n",value);
 }
       }

       //function to delete an element
 void dlt(){
   if(front==-1)
     {
       printf("\n Underflow!.Queue is empty");
     }else{
       printf("Element %d disqueued from the queue",queue[front]);
       front++;
       if(front>rear){
  front=rear=-1;
	}
       }
      }

      //function to display the front element
    void peek(){
      if(front==-1){
       printf("\nQueue is empty");
      }else{
	printf("\nFront element is %d",queue[front]);
       }
     }

     void display(){
      int i;
	if(front==-1){
  printf("\n Queue is empty\n");
	}else{
   printf("Queue elements are: ");
   for(i=front;i<=rear;i++){
    printf("%d",queue[i]);
    printf("\n");
   }
    
    }
   }
    void main(){
      int choice;
      while(1){
       printf("\n Queue Operations menu: ");
       printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
       printf("Enter your choice: ");
       scanf("%d",&choice);
       switch(choice){
	case 1:
  add();
  break;
	case 2:
  dlt();
  break;
	case 3:
  peek();
  break;
	case 4:
  display();
  break;
	case 5:
  printf("\nExiting the program.\n");
  exit(0);
	default:
  printf("Wrong Choice\n");
      }
     }
    ;
   }