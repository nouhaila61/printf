#include "main.h"

/**
 * print_number - print a number
 * @n: the number to print
 *
 * Return: number of characters printed
 */
int print_number(int n)
{
	int i = 0;

	if (n == -2147483648)
	{
		_putchar('-');
		i++;
		_putchar('2');
		i++;
		i += print_number(147483648);
	}
	else if (n < 0)
	{
		_putchar('-');
		i++;
		n *= -1;
		i += print_number(n);
	}
	else if (n > 9)
	{
		i += print_number(n / 10);
		i += print_number(n % 10);
	}
	else if (n <= 9)
	{
		_putchar(n + 48);
		i++;
	}
	return (i);
	}
