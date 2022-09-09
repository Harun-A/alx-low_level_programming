#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

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
