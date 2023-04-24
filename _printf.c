#include "main.h"
/**
 * _printf - replicate the printf function
 * description - handling different output cases (e.g %d for integer, %s for characters...)
 * 		using variadic functions,
 * 		used switch statements to handle format specifiers(c and s) and %
 * @...: variable number of arguments
 * @format: character
 *
 * Return:count
 */

int _printf(const char *format, ...)
{
	int count = 0;/* for returning the number of characters printed */
	va_list args;

	va_start(args, format);

	while (*format)/*pointer to each character == true , pointing to null byte == false */
	{
		if (*format == '%')/* ready to check for format specifers */
		{
			format++;
			if (*format == 'r')/*trying to deal with invalid format secifier r*/
			{
				continue;
			}
			switch (*format)
			{
				case 'c':
					{
						int ch = va_arg(args, int);
						/*if *format == c, handle int values*/
						_putchar(ch);
						++count;
						break;
					}
				case 's':
					{
						char *str = va_arg(args, char *);

						int i = 0;

						while (str[i])
						{
							_putchar(str[i]);
							++i;
							++count;
						}
						break;
					}
				case 'i':
				case 'd':
					{
						_print_number(va_arg(args,int), &count);
						break;
					}
				case '%':
					{
						_putchar('%');
						++count;
						break;
					}
				case 'b':
					{
						count += print_b(args);
						break;
					}
				case 'p':
					{
						count = _print_p(args, count);
						break;
					}
			/*	case 'u':
					{
						unsigned int n = va_arg(args, unsigned int);
						_print_uoxX(n, 10, &count, 0);
						break;
					}
				case 'o':
					{
						unsigned int n = va_arg(args, unsigned int);
						_print_uoxX(n, 8, &count, 0);
						break;
					}
				case 'x':
					{
						unsigned int n = va_arg(args, unsigned int);
						_print_uoxX(n, 16, &count, 0);
						break;
					}
				case 'X':
					{
						unsigned int n = va_arg(args, unsigned int);
						_print_uoxX(n, 16, &count, 0);
						break;
					} */
					default:
					{
						return (-1);
					};
			}
		}
			else
			{
				_putchar(*format);/*if not format specifiers putchar orgina
						   *original characters
						   */
				++count;
			}
			++format;
		}

		va_end(args);
		return (count);
	}
