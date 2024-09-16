#include <stdio.h>
int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2, *ptrSum;
    ptr1 = &num1;
    ptr2 = &num2;
    ptrSum = &sum;
    printf("Enter first number: ");
    scanf("%d", ptr1);
    printf("Enter second number: ");
    scanf("%d", ptr2);
    *ptrSum = *ptr1 + *ptr2;
    // Print the result
    printf("The sum of %d and %d is: %d\n", *ptr1, *ptr2, *ptrSum);
    return 0;
}
