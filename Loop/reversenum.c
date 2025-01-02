#include<stdio.h>

int main() {
    // Program to reverse a number
    int num, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Reversing the number
    while(num) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }

    printf("Reversed number: %d\n", rev);

    return 0;
}