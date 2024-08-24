#include <stdio.h>
void updateArray(int arr[], int size);
void printArray(int arr[], int size);
int main() {
    int SIZE;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &SIZE);
    if (SIZE <= 0) {
        printf("Invalid size. The size must be a positive integer.\n");
        return 1;
    }
    int originalArray[SIZE];
    printf("Enter %d elements for the array:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &originalArray[i]);
    }
    printf("Original array before function call:\n");
    printArray(originalArray, SIZE);
    updateArray(originalArray, SIZE);
    printf("Original array after function call:\n");
    printArray(originalArray, SIZE);
    
    return 0;
}
void updateArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 10;
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
