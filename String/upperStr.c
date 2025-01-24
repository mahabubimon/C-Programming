#include<stdio.h>
#include<string.h>

int main() {

    char str[30];

    printf("Enter your string: ");
    gets(str);

    strupr(str);
    // strlwr(str);

    printf("Uppercase: %s\n", str);

    return 0;
}