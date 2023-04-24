#include "main.h"
​
/**
 * _print_uoxX - handles conversion specifiers u o x X
 * @n: int n
 * @base: int base
 * @count: number of characters
 * @is_upper: upper
 * Return: void
 */
​
void _print_uoxX(unsigned int n, unsigned int base, int *count, int is_upper)
{
	const char *digits = "0123456789ABCDEF";

	if (is_upper)
	{
		digits = "0123456789ABCDEF";
	}
	if (n >= base)
	{
		_print_uoxX(n / base, base, count, is_upper);
	}
	_putchar(digits[n % base]);
	(*count)++;
}
