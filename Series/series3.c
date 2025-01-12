#include<stdio.h>

int main() {

    int num, i;
    double sum = 0;

    printf("Series: 1 + 1/2 + 1/3 ... + 1/n.\nEnter n = ");
    scanf("%d", &num);

    for (i=1; i<=num; i++) {
        sum = sum + 1/(double)i;

        if(i==1) {
            printf("1 + ");
        } else if (i==num) {
            printf("1/%d", num);
        } else {
            printf("1/%d + ", i);
        }
    }

    printf(" = %.2lf", sum);

    return 0;
}
