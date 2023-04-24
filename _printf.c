#include "main.h"

/**
 * print_arg - handles printing of argument based on conversion specifier
 * @arg: argument to print
 * @specifier: conversion specifier
 *
 * Return: the number of characters printed or -1 if an invalid conversion
 *         specifier is provided
 */
int print_arg(va_list arg, char specifier)
{
    switch (specifier)
    {
        case 'c':
            return (print_char(arg));
        case 's':
            return (print_string(arg));
        case '%':
            return (_putchar('%'));
        default:
            return (-1);
    }
}

/**
 * handle_space - handles skipping over white space in format string
 * @format: pointer to format string
 *
 * Return: pointer to next non-white space character in format string
 */
const char *handle_space(const char *format)
{
    while (*format == ' ')
    {
        format++;
    }
    return (format);
}

/**
 * _printf - produces output according to a format
 * @format: a string containing zero or more directives
 *
 * Return: the number of characters printed or -1 if an invalid conversion
 *         specifier is provided
 */
int _printf(const char *format, ...)
{
    va_list arg;
    unsigned int len = 0;
    int print_len;

    va_start(arg, format);
    if (!format)
        return (-1);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            format = handle_space(format);
            if (*format == '%')
            {
                len += _putchar('%');
            }
            else
            {
                print_len = print_arg(arg, *format);
                if (print_len == -1)
                {
                    va_end(arg);
                    return (-1);
                }
                len += print_len;
            }
        }
        else
        {
            len += _putchar(*format);
        }
        format++;
    }
    va_end(arg);
    return (len);
}
