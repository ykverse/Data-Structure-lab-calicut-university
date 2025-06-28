
#include <stdio.h>
#include <stdlib.h>
#include<conio.h> 

struct node {
    struct node *prev;
    struct node *next;
    int data;
};

struct node *head;

void insertion_beginning();
void deletion_specified();
void display();

void main() {
    int choice = 0;
    int numNodes, i;
    clrscr();
    printf("Yedhukrishna A.M \n NMAXSCS030 \n"); 

    // Ask user how many nodes to insert
    printf("Enter how many nodes you want to insert: ");
    scanf("%d", &numNodes);

    // Insert the requested number of nodes
    for (i = 0; i < numNodes; i++) {
        insertion_beginning();
    }

    while (choice != 9) {
        printf("\n        Main Menu       \n");
        printf("\n1.Insert an element node \n2.Delete the node after the given data\n3.Display\n4.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                insertion_beginning();
                break;
            case 2:
                deletion_specified();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Please enter valid choice..");
        }
    }
}

void insertion_beginning() {
    struct node *ptr;
    int item;

    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOVERFLOW");
    } else {
        printf("Enter Item value: ");
        scanf("%d", &item);

        if (head == NULL) {
            ptr->next = NULL;
            ptr->prev = NULL;
            ptr->data = item;
            head = ptr;
        } else {
            ptr->data = item;
            ptr->prev = NULL;
            ptr->next = head;
            head->prev = ptr;
            head = ptr;
        }
        
    }
}

void deletion_specified() {
    struct node *ptr, *temp;
    int val;

    printf("\n Enter the data after which the node is to be deleted: ");
    scanf("%d", &val);
    
    ptr = head;
    while (ptr != NULL && ptr->data != val)
        ptr = ptr->next;

    if (ptr == NULL) {
        printf("\nNode with value %d not found.\n", val);
    } else if (ptr->next == NULL) {
        printf("\nCan't delete the node. No node found after the specified value.\n");
    } else {
        temp = ptr->next;
        ptr->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = ptr;
        }
        free(temp);
        printf("\nNode deleted\n");
    }
}

void display() {
    struct node *ptr;
    printf("\nPrinting values...\n");
    ptr = head;
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
