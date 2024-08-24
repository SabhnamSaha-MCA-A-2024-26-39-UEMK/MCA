#include <stdio.h>

int main() {
    printf("\n*** Program to  check whether a character is alphabet or not. ***");
    printf("\n Name:SABHNAM SAHA,Class: MCA1A, Roll 44 \n");
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is an alphabet.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }
    return 0;
}

