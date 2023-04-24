#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a string containing zero or more directives
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, len = 0;
	va_list arg;

	va_start(arg, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1])
		{
			switch (format[i + 1])
			{
				case 'c':
					len += _putchar(va_arg(arg, int));
					break;
				case 's':
					len += _puts(va_arg(arg, char *));
					break;
				case 'd':
				case 'i':
					len += _print_integer(va_arg(arg, int));
					break;
				case '%':
					len += _putchar('%');
					break;
				default:
					len += _putchar('%');
					len += _putchar(format[i + 1]);
					break;
			}
			i++;
		}
		else
			len += _putchar(format[i]);
	}
	va_end(arg);

	return (len);
}