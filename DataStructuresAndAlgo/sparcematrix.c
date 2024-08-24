#include <stdio.h>
#include <stdlib.h>
int main() {
    int rows, cols;
    int *ptr;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    // Allocate memory for the matrix
    ptr = (int *)malloc(rows * cols * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the elements of the matrix:\n"); // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &ptr[i * cols + j]);
        }
    }
    printf("\nThe matrix is:\n"); // Display the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", ptr[i * cols + j]);
        }
        printf("\n");
    }
    free(ptr); // Free allocated memory
    return 0;
}

