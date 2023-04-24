#include "main.h"

/**
 * print_arg - handles printing of argument based on conversion specifier
 * @arg: argument to print
 * @specifier: conversion specifier
 *
 * Return: the number of characters printed
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
			return (_putchar('%') + _putchar(specifier));
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
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int len = 0;

	va_start(arg, format);
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			format = handle_space(format);
			len += print_arg(arg, *format);
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
