#include<stdio.h>

int main() {
    // Program to find the sum of digits of a number
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while( num != 0) {
        sum += num % 10;
        num = num / 10;
    }

    printf("Sum of digits: %d\n", sum);
    

    return 0;
}