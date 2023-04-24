#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int print_string(va_list arg);
int print_char(va_list arg);
int _putchar(char c);
int _putstring(const char *s);
int print_arg(va_list arg, char specifier);
const char *handle_space(const char *format);

#endif
