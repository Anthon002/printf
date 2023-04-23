#include "main.h"

/**
 * print_b: handling custom coversion specifier b 
 * @args: va_list variable
 * Return: count
 */

int print_b(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int m = 1 << ((sizeof(unsigned int) * 8) - 1);
	int count = 0;
	while (m)
	{
		_putchar(n & m ? '1' : '0');
		m >>= 1;
		count++;
	}
	return count;
}
