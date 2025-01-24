#include<stdio.h>
#include<string.h>

int main() {

    char source[] = "C Programming.", target[20];

    int i = 0;

    // Copy string using strcpy()
    // strcpy(target, source);

    // Copy string using loop
    while (source[i] != '\0') {
        target[i] = source[i];
        i++;
    }

    printf("Source string: %s \n", source);
    printf("Target string: %s \n", target);

    return 0;
}