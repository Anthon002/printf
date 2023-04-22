#include "main.h"
/**
 * _strlen - counts the string length
 * @str: string to count
 * Return: count
 */

int _strlent(const char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		++count;
		++str;
	}
	return count;
}
