#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */
{
	char lower = 'a';
	cahr upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		puthar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
