#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _print_string(va_list args);
int _print_char(va_list args);
int _putchar(char c);
int _print_int_helper(int n);
int _print_int(va_list args);
int _print_binary(va_list args);
#endif


