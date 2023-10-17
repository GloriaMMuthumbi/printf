#include "main.h"
#include <stddef.h>
#include <stdarg.h>
/**
 * _printf - prints number of characters
 * @format: the formatted string
 *
 * Return: returns the number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0, num;
	char *str;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case '%':
					count += _putchar('%');
					break;
				case 's':
				{
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(null)";
					while (*str)
						count += _putchar(*str++);
				}
					break;
				case 'i':
				case 'd':
					num = va_arg(args, int);
					if (num < 0)
					{
						count += _putchar('-');
						num = -num;
					}
					count =+ print_number(num);
					break;
				default:
					count += _putchar('%') + _putchar(*format);
					break;
			}
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
