#include "main.h"
#include <stddef.h>
/**
 * _print_string - prints a string
 * @args: the va_list containing the string to print
 *
 * Return: the number of characters printed
 */
int _print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (str == NULL)
	str = "(null)";

	while (*str)
	{
	_putchar(*str);
	str++;
	len++;
	}

	return (len);
}

/**
 * _print_char - prints a character
 * @args: the va_list containing the character to print
 *
 * Return: the number of characters printed
 */
int _print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}

