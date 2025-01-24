#include<stdio.h>
#include<string.h>

int main() {
    
    char name[20];

    printf("Enter your name: ");

    // gets(name); gets is unsafe, use fgets instead
    fgets(name, sizeof(name), stdin);

    // Remove the newline character from the name
    size_t len = strlen(name);
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Hello ");
    
     // puts is used to print a string with a newline character without using format specifier
    puts(name);

    return 0;
}