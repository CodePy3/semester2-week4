
/*
 * Some small tests of the string library
 */

#include <stdio.h>
#include <string.h>

int main( void ) {
    char str1[100] = "hello";
    char str2[100] = "goodbye";
    char str3[100];

    // use printf to verify the following tests
    printf("%s\n", str1);
    printf("%li\n", sizeof(str1));
    printf("%s\n", str2);
    printf("%li\n", sizeof(str2));
    printf("%s\n", str3);
    printf("%li\n", sizeof(str3));
    // use 'strcmp' to compare 2 strings - print the return value
    int cmp = strcmp(str1, str2);
    printf("%i\n", cmp);
    // use 'strcat' to concatenate 2 strings - print the resulting string
    strcat(str1, str2);
    printf("%s\n", str1);
    // use 'strcpy' to copy a string into str3 - print string 3
    strcpy(str3, str1);
    printf("%s\n", str3);

    return 0;
}
