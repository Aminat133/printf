#include "main.h"

/**
 * _print_int - prints an integer
 * @args: the va_list containing the integer to print
 *
 * Return: the number of characters printed
 */
int _print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}

	if (n / 10)
		count += _print_int_helper(n / 10);

	_putchar((n % 10) + '0');
	count++;

	return (count);
}

/**
 * _print_int_helper - helper function for _print_int
 * @n: the integer to print
 *
 * Return: the number of digits in n
 */
int _print_int_helper(int n)
{
	int count = 0;

	if (n / 10)
		count += _print_int_helper(n / 10);

	_putchar((n % 10) + '0');
	count++;

	return (count);
}

