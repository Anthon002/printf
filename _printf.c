#include "main.h"

/**
 * _printf - replicate the printf function
 * @...: variable number of arguments
 * Return:count
 */

int _printf(const char *format,...)
{
	int count = 0;
	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'r')
			{
				continue;
			}
			switch (*format)
			{
				case 'c':
					{
						int ch = va_arg(args, int);
						_putchar(ch);
						++count;
						break;
					}
				case 's':
					{
						char *str = va_arg(args,char *);
						int i = 0;
						while (str[i])
						{
							_putchar(str[i]);
							++i;
							++count;
						}
						break;
					}
				case '%':
					{
						_putchar('%');
						++count;
						break;
					}
					}
				default:
					{
						return (-1);
					};
			}
		}
			else
			{
				_putchar(*format);
				++count;
			}
			++format;
		}

		va_end(args);
		return count;
	}
