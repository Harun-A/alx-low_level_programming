#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0(success)
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');

	return (0);
}
