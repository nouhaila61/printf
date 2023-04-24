#include "main.h"

/**
 * _putstring - writes a string to stdout
 * @s: the string to write
 *
 * Return: the number of characters written
 */

int _putstring(char *s)
{
	int i;

	if (!s)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}