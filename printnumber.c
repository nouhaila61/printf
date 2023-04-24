#include "main.h"

/**
 * print_number - print a number
 * @n: the number to print
 *
 * Return: number of characters printed
 */
int print_number(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	if (n / 10 != 0)
		count += print_number(n / 10);
		_putchar(n % 10 + '0');
	count++;

	return (count);
}
