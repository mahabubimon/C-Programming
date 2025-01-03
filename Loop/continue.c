#include<stdio.h>

int main() {

    for(int i=1; i<20; i++) {
        if(i % 2 == 0) {
            printf("Hello World! %d\n", i);
            continue;
        }

        if (i == 15) {
            break;
        }
    }

    return 0;
}