#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");
}
