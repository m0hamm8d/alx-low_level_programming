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
	unsigned int l;

	i = 0;
	l = strlen(src);
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + l) = '\0';
	return (dest);
}
