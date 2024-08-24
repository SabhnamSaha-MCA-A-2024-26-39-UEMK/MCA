#include <stdio.h>

int main() {
    int number;
    printf("\n*** Program to check a number is odd or even ***");
    printf("\n Name:SABHNAM SAHA,Class: MCA1A, Roll 44 \n");
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}

