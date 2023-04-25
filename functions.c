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
	unsigned int m = (n < 0) ? -n : n;
	int len = (n <= 0) ? 1 : 0;

	if (n < 0)
		len += _putchar('-');
	if (m / 10)
		len += _print_integer(m / 10);
	len += _putchar((m % 10) + '0');

	return (len);
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