#include<stdio.h>

int main() {

    int num, i, result = 0;

    printf("1-2+3-4+5...+n\nEnter n = ");
    scanf("%d", &num);

    for (i=1; i<=num; i++) {
        if (i%2==1) {
            result = result + i;
        } else {
            result = result - i;    
        }
    }

    printf("Result = %d", result);

    return 0;
}