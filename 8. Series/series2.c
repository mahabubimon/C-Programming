#include<stdio.h>

int main() {

    int n1, n2, i=1, j=2, sum = 0;

    printf("Series 1*2 + 2*3 + 3*4 + n1 * n2.\nEnter two serial integer n1 and n2: ");
    scanf("%d %d", &n1, &n2);

    while (i <= n1 && j <= n2) {
        sum = sum + i * j;

        i == n1 ? printf(" %d*%d", i, j) : printf(" %d*%d +", i, j);

        i++; j++;
    }

    printf(" = %d \n", sum);

    return 0;
}