#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Alwayes 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z' ; i++)
	{
		if (i == 'e' || i == 'q')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
