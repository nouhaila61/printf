#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - structure for printing diffrent types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);

} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _put_string(const char *s);

#endif
