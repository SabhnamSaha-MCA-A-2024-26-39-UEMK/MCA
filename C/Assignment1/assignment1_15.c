#include <stdio.h>

int main() {
    printf("\n*** Program to check whether a number is divisible by 5 and 11 or not within the range of 100 to 500. ***");
    printf("\n Name:SABHNAM SAHA,Class: MCA1A, Roll 44 \n");
    for (int num = 100; num <= 500; num++) {
        if (num % 5 == 0 && num % 11 == 0) {
            printf("%d\n", num);
        }
    }

    return 0;
}

