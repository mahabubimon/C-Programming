#include<stdio.h>

int main() {

    // String declaration
    char str1[] = { 'P', 'a', 'b', 'e', 'l', '\0' };
    char str2[] = "Mahabub Emon";

    char fullName[20];

    printf("Enter your full name: ");
    gets(fullName);
    
    printf("%s\n", fullName);
    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}