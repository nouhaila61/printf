#include "main.h"

/**
 * print_char - prints a character to stdout
 * @arg: the character to print
 *
 * Return: the number of characters printed
 */
int print_char(va_list arg)
{
    return (_putchar(va_arg(arg, int)));
}

/**
 * print_string - prints a string to stdout
 * @arg: the string to print
 *
 * Return: the number of characters printed
 */
int print_string(va_list arg)
{
    char *s = va_arg(arg, char *);

    if (s == NULL)
        return (_puts("(null)"));
    else
        return (_puts(s));
}

/**
 * print_integer - prints an integer to stdout
 * @arg: The integer to print
 *
 * Return: the number of digits printed
 */
int print_integer(va_list arg)
{
    return (_print_integer(va_arg(arg, int)));
}

/**
 * print_percent - prints a percent sign to stdout
 *
 * Return: the number of characters printed
 */
int print_percent(void)
{
    return (_putchar('%'));
}

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
                len += print_percent();
            else if (format[i] == 'c')
                len += print_char(arg);
            else if (format[i] == 's')
                len += print_string(arg);
            else if (format[i] == 'd' || format[i] == 'i')
                len += print_integer(arg);
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
