#include "main.h"

/**
 * print_b: handling custom coversion specifier b 
 * @args: va_list variable
 * Return: count
 */

int print_b(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

       	if (n == 0) {
	       	_putchar('0');
	       	count++;
	}
	else
	{
		unsigned int mask = 1 << ((sizeof(unsigned int) * 8) - 1);
		while (mask && !(n & mask))
		{
			mask >>= 1;
		}

		while (mask)
		{
			_putchar((n & mask) ? '1' : '0');
			count++;
			mask >>= 1;
		}
	}
	return count;
}
