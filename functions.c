#include "main.h"

/**
 * _print_integer - prints an integer to stdout
 * @n: The integer to print
 *
 * Return: On success the number of digits printed.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _print_integer(int n)
{
	int cou = 0;

	if (n < 0)
	{
		_putchar('-');
		cou++;
		n = -n;
	}

	cou = cou + _print_unsigned_int(n);
	return (n);
}
/**
 * _print_unsigned_int - prints an integer to stdout
 * @n: The integer to print
 *
 * Return: On success the number of digits printed.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _print_unsigned_int(int n)
{
	int cou = 0;

	if (n / 10)
	{
		cou = cou + _print_unsigned_int(n / 10);
	}
	_putchar((n % 10) + '0');
	cou++;
	return (cou);
}
/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - writes a string to stdout
 * @s: The string to print
 *
 * Return: On success the length of the string.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _puts(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
		len += _putchar(s[i]);
	return (len);
}
