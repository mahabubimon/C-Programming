#include<stdio.h>

int main() {
    // Absolute value
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Absolute value of %d is %d.", num, num<0 ? -num : num);
    return 0;
}