#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - produces output according to a format
 * @format: character string containing directives
 *
 * Return: number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
		va_list args;
		char c, *s;
		int count = 0;

		va_start(args, format);
		while (*format)
		{
				if (*format == '%')
				{
						format++;
						switch (*format)
						{
								case 'd':
								case 'i':
								{
										int n = va_arg(args, int);
										if (n < 0)
								{
										putchar('-');
										count++;
										n = -n;
								}
										int divisor = 1;
										while (n / divisor > 9)
								{
										divisor *= 10;
								}
										while (divisor > 0)
								{
									 putchar((n / divisor) % 10 + '0');
										count++;
										divisor /= 10;
								}
								}
										break;

								case 'c':
										c = (char)va_arg(args, int);
										putchar(c);
										count++;
										break;
								case 's':
										s = va_arg(args, char *);
										while (*s)
										{
												putchar(*s);
												count++;
												s++;
										}
									   break;
								case '%':
										putchar('%');
										count++;
										break;
								default:
										putchar('%');
										putchar(*format);
										count += 2;
										break;
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
		return (count);
}

