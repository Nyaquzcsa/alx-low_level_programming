#include <stdio.h>

/**
*main – a program that calculate the sizes of  Data Types for current system
*Return 0 (Success)
*/
int main()
{
int a;
float b;
char c;
long int d;
long long int e;

printf("Size of int: %zu bytes\n", sizeof(a));
printf("Size of float: %zu bytes\n", sizeof(b));
printf("Size of char: %zu bytes\n", sizeof(c));
printf("Size of long int: %zu bytes\n", sizeof(d));
printf("Size of long long int: %zu bytes\n", sizeof(e));

return (0);

}
