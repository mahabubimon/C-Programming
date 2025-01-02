#include<stdio.h>

int main() {
    // Program to reverse a number
    int num1, num2, rev1 = 0, rev2 =0;

    // Reversing the number using for loop
    printf("Enter 1st number: ");
    scanf("%d", &num1);

    for(num1; num1 != 0; num1 /= 10) {
        rev1 = rev1 * 10 + num1 % 10;
    }

    printf("Reversed number: %d\n", rev1);

    // Reversing the number using while loop
    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    while(num2) {
        rev2 = rev2 * 10 + num2 % 10;
        num2 = num2 / 10;
    }

    printf("Reversed number: %d\n", rev2);

    return 0;
}