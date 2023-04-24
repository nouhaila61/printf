#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: the number of digits printed
 */
int print_number(int n)
{
	int i = 0, j = 1;

	if (n < 0)
	{
		_putchar('-');
		i++;
		n *= -1;
	}

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (j <= n)
			j *= 10;

	j /= 10;

	while (j > 0)
	{
		_putchar((n / j) + '0');
		n %= j;
		j /= 10;
		i++;
	}

	return (i);
}
