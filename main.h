#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

int print_number(int n);
int _putchar(char c);
int _putstring(const char *s);
int t_print(const char *str, int i, va_list arg, int len);
int _printf(const char *format, ...);

#endif
