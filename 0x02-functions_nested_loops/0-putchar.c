#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char *x;

	x = "_putchar";

	for (i = 0; x[i] != '\0'; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}

