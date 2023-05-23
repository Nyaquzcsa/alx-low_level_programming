#include <stdio.h>
#include "main.h"
/**
 * printAlphabet - prints the alphabet in lowercase.
 */
void printAlphabet(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	}
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printAlphabet();
	return (0);
}
