#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string containing zero or more directives
 *
 * Return: the number of characters printed (excluding the
 * null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				count += _print_char(args);
			else if (*format == 's')
				count += _print_string(args);
	else if (*format == '%')
	{
		write(1, "%%", 1);
				count += 1;
	}
			else
			{
				format++;
			}

		}
		else
		{
		 _putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);

	return (count);
}

