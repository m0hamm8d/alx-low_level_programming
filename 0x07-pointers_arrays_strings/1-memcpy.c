#include "main.h"
#include <string.h>

/**
 * _memcpy - put spacific char in memory
 * @dest: first input
 * @src: secend input
 * @n: thid input
 *
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
