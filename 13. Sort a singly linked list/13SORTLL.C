#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* curr) {
    if (curr == NULL) {
        printf("List is empty.\n");
        return;
    }
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}


struct Node* getTail(struct Node* cur) {
    while (cur != NULL && cur->next != NULL)
        cur = cur->next;
    return cur;
}


struct Node* partition(struct Node* head, struct Node* tail) {
    struct Node* pivot = head;
    struct Node* pre = head;
    struct Node* curr = head;
    int currData = pivot->data;

    while (curr != tail->next) {
	if (curr->data < pivot->data) {
	    int temp = curr->data;
	    curr->data = pre->next->data;
	    pre->next->data = temp;
	    pre = pre->next;
	}
	curr = curr->next;
    }


    pivot->data = pre->data;
    pre->data = currData;

    return pre;
}


void quickSortHelper(struct Node* head, struct Node* tail) {
    struct Node* pivot = partition(head, tail);

    if (head == NULL || head == tail) {
	return;
    }

    quickSortHelper(head, pivot);
    quickSortHelper(pivot->next, tail);
}


struct Node* quickSort(struct Node* head) {
    struct Node* tail = getTail(head);
    quickSortHelper(head, tail);
    return head;
}

struct Node* createNode(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}


void insertNode(struct Node** head, int x) {
    struct Node* newNode = createNode(x);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int main() {
    struct Node* head = NULL;
    int choice,i, value, numberOfNodes;
    clrscr();
    printf("Yedhukrishna A.M \n NMAXSCS030 \n");
    printf("How many nodes do you want to add? ");
    scanf("%d", &numberOfNodes);


    for (i = 0; i < numberOfNodes; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        insertNode(&head, value);
    }

  
    while (1) {
    
        printf("\nMenu:\n");
        printf("1. Display the list\n");
        printf("2. Sort the list using\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("The current linked list is: ");
                printList(head);
                break;

            case 2:
                printf("Sorting the list using Quick Sort...\n");
                head = quickSort(head);
                break;

            case 3:
                printf("Exiting the program...\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
