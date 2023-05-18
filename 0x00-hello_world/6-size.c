#include <stdio.h>
/**
 * main – a program that calculate the sizes of
 * Data Types for current system
 * Return 0 (Success)
 */
int main(void)
{
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu bytes\n", sizeof(long long int));
	return (0);
}
