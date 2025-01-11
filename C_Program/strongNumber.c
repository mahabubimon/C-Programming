#include<stdio.h>

int main() {

    int num, temp, rem, fact, sum = 0, i;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {

        rem = temp % 10;
        
        fact = 1;

        for (i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        
        temp = temp / 10;
    }

    if (num == sum) {
        printf("%d is a STRONG number.\n", num);
    } else {
        printf("%d is not a STRONG number.\n", num);
    }

    return 0;

}