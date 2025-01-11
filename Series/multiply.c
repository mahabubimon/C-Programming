#include<stdio.h>

int main() {

    int n1, n2, i=1, j=2, sum = 0;

    printf("Enter two serial integer n1 and n2: ");
    scanf("%d %d", &n1, &n2);

    while (i <= n1 && j <= n2) {
        sum = sum + i * j;
        i++; j++;
    }

    printf("Sum of serial multiply = %d \n", sum);

    return 0;
}