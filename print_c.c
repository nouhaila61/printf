#include "main.h"

/**
 * print_c - print character
 * @c: character to print
 * Return: always 1
 */
int print_c(va_list c)
{
	char character = (char)va_arg(c, int);

	_putchar(character);
	return (1);
}
