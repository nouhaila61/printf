#include "main.h"

/**
 * print_char - prints a character to stdout
 * @arg: the variable argument list
 *
 * Return: the number of characters printed
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);

	return (_putchar(c));
}

/**
 * print_string - prints a string to stdout
 * @arg: the variable argument list
 *
 * Return: the number of characters printed
 */
int print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	return (_putstring(s));
}
/**
 * _putchar - writes a character to stdout
 * @c: the character to write
 *
 * Return: On success, 1. On error, -1 is returned, a
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putstring - writes a string to stdout
 * @s: the string to write
 *
 * Return: the number of characters written
 */

int _putstring(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
