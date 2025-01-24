#include<stdio.h>

int main() {

    int n, i, first = 2, second = 1, nextNum;

    printf("Enter lucas series count 'n' = ");
    scanf("%d", &n);

    printf("%d, %d, ", first, second);

    for(i=3; i<=n; i++){
        nextNum = first + second;
        first = second;
        second = nextNum;

        printf("%d, ", nextNum);
    }

    return 0;
}