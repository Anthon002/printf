#include "main.h"

/**
 * print_integer - Print an integer to stdout.
 * @args: A va_list containing the integer to be printed.
 *
 * Return: The number of digits printed.
 */
int print_integer(va_list args)
{
    int n = va_arg(args, int);
    int div = 1, len = 0;

    if (n < 0)
    {
        len += _putchar('-');
        n = -n;
    }

    while (n / div > 9)
        div *= 10;

    while (div != 0)
    {
        len += _putchar('0' + n / div);
        n %= div;
        div /= 10;
    }

    return (len);
}

