#include<stdio.h>
#include<string.h>

int main() {

    char name[30], reverse[30];
    int i;

    printf("Enter name: ");
    gets(name);

    int len = strlen(name);

    // string reverse using strrev()
    // strrev(name);

    // string reverse using loop
    for (i=0; i<len; i++) {
        reverse[i] = name[len-1-i];
    }

    printf("Name: %s\n", name);
    printf("Reverse Name: %s\n", reverse);

    return 0;
}