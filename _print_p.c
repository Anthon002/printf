#include "main.h"

/**
 * _print_p - handles the conversion specifier for p
 * @args: va_list args
 * @count: number of character
 * Return: count
 */

int _print_p(va_list args, int count)
{
	void *ptr = va_arg(args, void *);
	char *nil = "(nil)";
	unsigned long int n = (unsigned long int)ptr;
	char *digits = "0123456789abcdef";
	int i, j;
	char buffer[100];

	if (!ptr)
	{
		for (i = 0; nil[i]; i++)
		{
			_putchar(nil[i]);
			count++;
		}
		return (count);
	}

	i = 0;
	while (n)
	{
		buffer[i] = digits[n % 16];
		n /= 16;
		i++;
	}
	if (i == 0)
	{
		buffer[i] = '0';
		i++;
	}
	buffer[i] = '\0';
	_putchar('0');
	_putchar('x');
	count += 2;
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		count++;
	}
	return (count);
}

