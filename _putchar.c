#include "main.h"

/**
 * _putchar - write character c to standard output
 * @c: parametre
 * Return: success 1 or -1 error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
