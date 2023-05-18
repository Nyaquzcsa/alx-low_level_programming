#include <stdio.h>

/**
* main – a program that calculate the sizes of  Data Types for current system
* Return 0 (Success)
*/
int main()
{
	int a;
	float b;
	char c;
	long int d;
	long long int e;

		printf("Size of int: %lu byte(s)\n", sizeof(a));
		printf("Size of float: %lu byte(s)\n", sizeof(b));
		printf("Size of char: %lu byte(s)\n", sizeof(c));
		printf("Size of long int: %lu byte(s)\n", sizeof(d));
		printf("Size of long long int: %lu byte(s)\n", sizeof(e));

return (0);

}
