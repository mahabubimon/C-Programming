#include<stdio.h>

int main() {

    int i = 1;
    
    multi: 
        printf("Multiplication of 2 * %d = %d\n", i, 2 * i);
        i++;

    if(i <= 10) {
        goto multi;
    } else {
        printf("Loop ended.\n");
    }
    
    return 0;
    
}