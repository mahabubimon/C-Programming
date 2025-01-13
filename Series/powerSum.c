#include<stdio.h>

int main() {

    int num, i, sum = 0;

    printf("Series: 1*1 + 2*2 + 3*3 ... + n*n.\nEnter n = ");
    scanf("%d", &num);

    for (i=1; i<=num; i++) {
        sum = sum + i * i;
    }

    printf("Sum of 1 to %d power series= %d", num, sum);

    return 0;
}