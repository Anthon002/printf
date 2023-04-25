#include "main.h"

/**
 * _print_S - prints the string
 * @str: string
 * Return: count
 */

int _print_S(char *str)
{
	int i, count = 0;
	char hex[3] = {'\0', '\0', '\0'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			sprintf(hex, "%02X", str[i]);
			_putchar(hex[0]);
			_putchar(hex[1]);
			count += 4;
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
