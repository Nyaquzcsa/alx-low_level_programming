#include <stdio.h>

/**
 * main – a program that calculate the sizes of  Data Types for current system
 * Return 0 (Success)
*/
int main (void)
{

    int intType;
    float floatType;
    char charType;
    long int longType;
    long long int longlongType;

    printf("Size of int: %lu byte(s)\n", sizeof(intType));
    printf("Size of float: %lu byte(s)\n", sizeof(floatType));
    printf("Size of long int: %lu byte(s)\n"sizeof(longType));
    printf("Size of char: %lu byte(s)\n", sizeof(charType));
    printf("Size of long long int: %lu byte(s)\n"sizeof(longlongType));

    return 0;

}
