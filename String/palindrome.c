#include<stdio.h>
#include<string.h>

int main() {

    char str1[20], rev[20];

    printf("Enter a string less than 20 char: ");
    gets(str1);
    
    int i, len = strlen(str1);

    for (i=0; i<len; i++) {
        rev[i] = str1[len-i-1];
    }

    int d = strcmp(str1, rev);

    if (d==0) {
        printf("\n%s is palindrome.\n", str1);
        
    } else {
        printf("\n%s is not palindrome.\n", str1);
    }

    return 0;
}