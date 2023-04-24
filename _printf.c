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

int t_print(const char *str, int i, va_list arg, int len, int tmpi)
{
	int n;

	switch (str[i + 1])
	{
		case 'c':
			len += _putchar(va_arg(arg, int));
			break;
		case 's':
			len += _putstring(va_arg(arg, char *));
			break;
		case 'd':
		case 'i':
			n = va_arg(arg, int);
			len += print_number(n);
			break;
		case '%':
			len += _putchar('%');
			break;
		case 'b':
			len += convert_binary(va_arg(arg, int));
			break;
		default:
			len += _putchar(str[tmpi]);
			_putchar(str[tmpi + 1]);
			len++;
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
	int tmpi = 0;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			tmpi = i;
			while (format[++i] == ' ')
				;
			len = t_print(format, i - 1, arg, len, tmpi);
		}
		else
			len += _putchar(format[i++]);
	}

	va_end(arg);

	return (len);
}
