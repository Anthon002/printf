#include "main.h"

/**
 * _print_p - handles the conversion specifier for p
 * @args: va_list args
 * @count: number of character
 * Return: count
 */

int _print_pointer(va_list args, int count)
{
    void *ptr = va_arg(args, void *);
    unsigned long n = (unsigned long)ptr;
    _putchar('0');
    _putchar('x');
    count += 2;
    if (n == 0)
    {
        _putchar('0');
        count++;
    }
    else
    {
        char digits[] = "0123456789abcdef";
        char buffer[20];
        int i = 0;
        while (n > 0)
	{
            buffer[i] = digits[n % 16];
            n /= 16;
            i++;
        }
        while (i > 0)
	{
            i--;
            _putchar(buffer[i]);
            count++;
        }
    }
    return count;
}

