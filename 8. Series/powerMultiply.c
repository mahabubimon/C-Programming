#include<stdio.h>

int main() {

    int num, i, result = 1;

    printf("Series: 1*1 * 2*2 * 3*3 ... * n*n.\nEnter n = ");
    scanf("%d", &num);

    for (i = 1; i<=num; i++) {
        result = result * i * i;
    }

    printf("Result = %d", result);

    return 0;
}