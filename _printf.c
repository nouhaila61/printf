#include "main.h"

/**
 * t_print - prints a character or string based on the format specifier
 * @str: pointer to the format string
 * @i: current position in the format string
 * @arg: variable argument list
 * @len: current length of the output
 * @tmpi: holds the value of i
 *
 * Return: the updated length of the output
 */

int t_print(const char *str, int i, va_list arg, int len)
{

	switch (str[i + 1])
	{
		case 'c':
			len += _putchar(va_arg(arg, int));
			break;
		case 's':
		{
			char *s = va_arg(arg, char *);
			if (s == NULL)
				s = "(null)";
			len += _putstring(s);
			break;
		}
		case '%':
			len += _putchar('%');
			break;
		default:
			len += _putchar(str[i]);
			len += _putchar(str[i + 1]);
			break;
	}

	return (len);
}

/**
 * _printf - produces output according to a format
 * @format: a string containing zero or more directives
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0;
	va_list arg;
	int result;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			result = t_print(format, i, arg, len);
			if (result == -1)
				return (-1);
			len = result;
			i += 2;
		}
		else
			len += _putchar(format[i++]);
	}

	va_end(arg);

	return (len);
}
