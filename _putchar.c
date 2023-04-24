#include "main.h"
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
