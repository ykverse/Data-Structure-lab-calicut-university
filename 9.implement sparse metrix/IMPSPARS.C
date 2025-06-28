#include <stdio.h> 
#include <stdlib.h> 
#include<conio.h> 
int main() { 
    int S[10][10], m, n, i, j, k = 0, size = 0; 
    int **M; 
    clrscr();
    printf("Yedhukrishna A.M \n NMAXSCS030 \n"); 
    // Size of matrix 
    printf("Enter number of rows in the matrix: "); 
    scanf("%d", &m); 
    printf("Enter number of columns in the matrix: "); 
    scanf("%d", &n); 
 
    // Read elements of matrix 
    printf("Enter elements in the matrix: "); 
    for (i = 0; i < m; i++) 
 for (j = 0; j < n; j++) 
     scanf("%d", &S[i][j]); 
 
    // Print original matrix and find number of non-zero elements 
    printf("The matrix is:\n"); 
    for (i = 0; i < m; i++) { 
 for (j = 0; j < n; j++) { 
     printf(" %d ", S[i][j]); 
     if (S[i][j] != 0) 
  size++; 
 } 
 printf("\n"); 
    } 
 
    // Dynamically allocate memory for triplet representation 
     **M = malloc(3 * sizeof(int *)); 
    for (i = 0; i < 3; i++) { 
 M[i] = malloc(size * sizeof(int)); 
    } 
 
    if (M == NULL) { 
 fprintf(stderr, "Memory allocation failed\n"); 
 return 1; // Exit if memory allocation fails 
    } 
 
    // Making of new matrix 
    for (i = 0; i < m; i++) 
 for (j = 0; j < n; j++) 
     if (S[i][j] != 0) { 
  M[0][k] = i; 
  M[1][k] = j; 
  M[2][k] = S[i][j]; 
  k++; 
     } 
 
    // Print new matrix 
    printf("Triplet representation of the matrix is:\n"); 
    for (i = 0; i < 3; i++) { 
 for (j = 0; j < size; j++) 
     printf(" %d ", M[i][j]); 
 printf("\n"); 
    } 
 
    // Free allocated memory 
    for (i = 0; i < 3; i++) { 
 free(M[i]); 
    } 
    free(M); 
 
    getch(); 
}