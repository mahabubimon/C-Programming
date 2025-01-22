#include<stdio.h>
#include<string.h>

int main() {

    char str1[15] = "Bangladesh", str2[15] = "Turkiye", temp[15];

    printf("\nBefore swapping:\n");
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    // string swapping
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("\nAfter swapping:\n");
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);
    
    return 0;
}