#include<stdio.h>

int main() {
    // Program to check if a number is palindrome or not
    int num, temp, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    if(num == rev) {
        printf("The number is a palindrome\n");
    } else {
        printf("The number is not a palindrome\n");
    }
    
    return 0;
}