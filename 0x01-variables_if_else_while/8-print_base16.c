#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (successful)
 */

int main(void)
{
	int digit = '0';
	int a_f = 'a';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	while (a_f <= 'f')
	{
		putchar(a_f);
		a_f++;
	}
	putchar('\n');
	return (0);
}
