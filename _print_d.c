#include "main.h"

/**
 * _print_d - Prints an integer
 * @args: List of arguments
 * Return: Number of printed characters
 */
int _print_d(va_list args)
{
        int num = va_arg(args, int), num_copy = num, i = 0, count = 0;

        if (num < 0)
        {
                num = -num;
                num_copy = -num_copy;
                _putchar('-');
                count++;
        }

        while (num_copy / 10 != 0)
        {
                i++;
                num_copy /= 10;
        }

        while (i >= 0)
        {
                int digit = num / power(10, i);

                _putchar(digit + '0');
                count++;
                num -= digit * power(10, i);
                i--;
        }

        return (count);
}

/**
 * power - Raises a number to a power
 * @base: The base number
 * @exp: The exponent
 * Return: The result of the calculation
 */
int power(int base, int exp)
{
        int result = 1;

        while (exp--)
        {
                result *= base;
        }

        return result;
}

