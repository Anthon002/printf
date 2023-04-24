#include "main.h"
/**
 * _print_number - handles i and d
 * @n: number
 * @count: char count
 * Return:void
 */

void _print_number(int n, int *count)
{
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		(*count)++;
		n = -n;
	}
	while (n / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		int digit = n / divisor;

		_putchar('0' + digit);
		(*count)++;
		n -= digit * divisor;
		divisor /= 10;
	}
}

