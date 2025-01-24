#include<stdio.h>

int main() {

    // Check if a person is eligible to vote
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    // Ternary Operator: expression ? true : false
    (age >= 18) ? printf("You are eligible to vote.\n") : printf("You are not eligible to vote.\n");

    return 0;
}