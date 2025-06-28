#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* deleteHead(struct Node* head)
{
    struct Node* temp = head;

    if (head == NULL)
	return NULL;




    
    head = head->next;

    
    free(temp);

    
    return head;
}


void printList(struct Node* head)
{
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}


struct Node* createNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}


struct Node* addNode(struct Node* head, int data)
{
    struct Node* temp = head;

    struct Node* newNode = createNode(data);
    if (head == NULL) {
	return newNode;
    }


    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

int main()
{
    struct Node* head = NULL;
    int choice,i, data, numNodes;
    clrscr();
    printf("Yedhukrishna A.M \n NMAXSCS030 \n");

    printf("Number of node you want:  ");
    scanf("%d", &numNodes);


    for (i = 1; i <= numNodes; i++) {
	printf("Enter data for node %d: ", i);
	scanf("%d", &data);
	head = addNode(head, data);
    }


    while (1) {

	printf("\nMenu:\n");
	printf("1. Add a node\n");
	printf("2. Delete an element and display the list\n");
	printf("3. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch (choice) {
	    case 1:

		printf("Enter the data to add: ");
		scanf("%d", &data);
		head = addNode(head, data);
		printf("Node with data %d added to the list.\n", data);
		break;
	    case 2:

		head = deleteHead(head);
		printf("Head node deleted.\n");
		printf("Updated linked list: ");
		printList(head);
		break;
	    case 3:

		printf("Exiting program.\n");
		exit(0);
	    default:

		printf("Invalid choice, please try again.\n");
	}
    }

    return 0;
}
