#include<stdio.h>
#include<string.h>

int main() {

    // String declaration

    char name[20];

    printf("Enter your full name: ");
    gets(name);

    int i, len = strlen(name);

    printf("\nLength of your name: %d\nAll character are below:\n\n", len);

    for (i=0; i<len; i++) {
        printf("%c \n", name[i]);
    }

    return 0;
}