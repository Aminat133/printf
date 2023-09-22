#include "main.h"
/**
 * _print_binary - prints an unsigned int in binary format
 * @args: the va_list containing the unsigned int to print
 *
 * Return: the number of characters printed
 */
int _print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 31; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count > 0 || i == 0)
		{
			_putchar('0');
			count++;
		}
	}

	return (count);
}


