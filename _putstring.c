#include "main.h"
/**
 * _put_string - prints the giver characters
 *
 * @s: string to be printed
 * Return: length of printed characters
 */
int _put_string(const char *s)
{
	int len;

	len = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		len = 6;
	}
	while (s && s[len])
	{
		_putchar(s[len]);
		len++;
	}
	return (len);
}
