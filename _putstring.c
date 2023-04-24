#include "main.h"
/**
 * _putstring - prints the giver characters
 *
 * @s: string to be printed
 * Return: length of printed characters
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
