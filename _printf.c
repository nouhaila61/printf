#include "main.h"

/**
 * _printf - prints output according to a format
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
				{
					char c = (char)va_arg(args, int);
					putchar(c);
					count++;
					break;
				}
				case 's':
				{
					char *s = va_arg(args, char*);
					while (*s)
					{
						putchar(*s++);
						count++;
					}
					break;
				}
				case '%':
				{
					putchar('%');
					count++;
					break;
				}
				case 'd':
				case 'i':
				{
					int num = va_arg(args, int);
					if (num < 0)
					{
						putchar('-');
						count++;
						num = -num;
					}
					int rev = 0, len = 0;
					do
					{
						rev = rev * 10 + num % 10;
						num /= 10;
						len++;
					} while (num);
					while (len--)
					{
						putchar(rev % 10 + '0');
						rev /= 10;
						count++;
					}
					break;
				}
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return count;
}
