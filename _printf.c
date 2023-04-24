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
        if (format[i] == '%')
        {
            i++;
            while (format[i] == ' ')
                i++;

            if (format[i] == '\0')
                return (-1);

            if (format[i] == '%')
            {
                len += _putchar('%');
                continue;
            }
            else if (format[i] == 'c')
                len += _putchar(va_arg(arg, int));
            else if (format[i] == 's')
            {
                char *s = va_arg(arg, char *);

                if (s == NULL)
                    len += _puts("(null)");
                else
                    len += _puts(s);
            }
            else if (format[i] == 'd' || format[i] == 'i')
                len += _print_integer(va_arg(arg, int));
            else
            {
                len += _putchar('%');
                len += _putchar(format[i]);
            }
        }
        else
            len += _putchar(format[i]);
    }
    va_end(arg);

    return (len);
}
