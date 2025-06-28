

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* deleteNode(struct Node* head, int position) {
    struct Node* prev;
    struct Node* temp = head;
    int i;

    
    if (temp == NULL)
        return head;

   
    if (position == 1) {
        head = temp->next;
        free(temp);
        return head;
    }
     
      
   
    for (i = 1; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }


    if (temp != NULL) {
        prev->next = temp->next;
        free(temp);
    }

    else {
        printf("Invalid position\n");
    }

    return head;
}


void printList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}


struct Node* createNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}


struct Node* insertNode(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    struct Node* temp = head;
    if (head == NULL) {
	return newNode;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

int main() {
    struct Node* head = NULL;
    int choice, data, position;
    clrscr();
    printf("\n YEDHUKRISHNA A.M \n NMAXSCS030\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add Node to the List\n");
        printf("2. Delete Node at Position\n");
        printf("3. Print List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to add to the list: ");
                scanf("%d", &data);
                head = insertNode(head, data);
                printf("Node added successfully.\n");
                break;

            case 2:
                printf("Enter position to delete node: ");
                scanf("%d", &position);
                head = deleteNode(head, position);
                printf("List after deletion: ");
                printList(head);
                break;

            case 3:
                printf("Current List: ");
                printList(head);
                break;

            case 4:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

