#include "main.h"

/**
 * get_bit - get bit
 * @n: 1 mem
 * @index: 2 mem
 *
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (((n >> index) & 1) == 1)
		return (1);
	else if (((n >> index) & 1) == 0)
		return (0);
	return (0);
}
