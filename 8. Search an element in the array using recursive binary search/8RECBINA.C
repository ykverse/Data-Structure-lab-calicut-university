#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int binarySearch(int arr[], int low, int high, int x)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;

        
        if (arr[mid] == x)
            return mid;

       
        if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);

        
        return binarySearch(arr, mid + 1, high, x);
    }

   
    return -1;
}

void displayMenu()
{
    printf("\nMenu:\n");
    printf("1. Enter array and perform recursive binary search\n");
    printf("2. Exit\n");
    printf("Choose an option: ");
}

int main()
{
    int choice, n, i, x, result;
    int *arr = NULL;
    clrscr();
    printf("\nYEDHUKRISHNA A.M \n NMAXSCS030\n");
    while (1) {
	displayMenu();
	scanf("%d", &choice);

	switch(choice) {
	    case 1:

		printf("Enter the number of elements in the array: ");
		scanf("%d", &n);


		arr = (int*)malloc(n * sizeof(int));
		if (arr == NULL) {
		    printf("Memory allocation failed!\n");
		    return 1;
		}


		printf("Enter %d elements (sorted in ascending order):\n", n);
		for(i = 0; i < n; i++) {
		    scanf("%d", &arr[i]);
		}


		printf("Enter the element to search: ");
		scanf("%d", &x);


		result = binarySearch(arr, 0, n - 1, x);


		if(result == -1)
		    printf("Element %d is not present in the array.\n", x);
		else
		    printf("Element %d is present at index %d.\n", x, result);


		free(arr);
		break;

	    case 2:
		printf("Exiting the program...\n");
		return 0;

	    default:
		printf("Invalid choice. Please try again.\n");
	}
    }


}
