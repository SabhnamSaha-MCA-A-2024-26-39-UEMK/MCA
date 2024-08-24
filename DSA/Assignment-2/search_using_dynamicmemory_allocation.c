#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int n, search, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    array = (int *)malloc(n * sizeof(int));

    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++) {
        if (array[i] == search) {
            printf("Element %d found at index %d.\n", search, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }
    free(array);

    return 0;
}
