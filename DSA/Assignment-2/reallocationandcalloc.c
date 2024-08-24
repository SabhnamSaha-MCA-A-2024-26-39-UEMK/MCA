#include <stdio.h>
#include <stdlib.h>
int main() {
    int *array;
    int n, newSize;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    array = (int *)calloc(n, sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter new size for reallocation: ");
    scanf("%d", &newSize);
   array = (int *)realloc(array, newSize * sizeof(int));
    if (array == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }
    if (newSize > n) {
        printf("Enter additional %d elements:\n", newSize - n);
        for (int i = n; i < newSize; i++) {
            scanf("%d", &array[i]);
        }
    }
    printf("Elements after reallocation:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    free(array);
    return 0;
}
