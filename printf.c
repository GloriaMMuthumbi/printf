#include "main.h"
#include <stdarg.h>
/**
 * _printf - prints number of characters
 * @format: the formatted string
 * Return: returns the number of characters printed
*/
int _printf(const char *format, ...)
{
	int count = 0;
	char *str, rotated;
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);	
	while (*format)
	{
		if (*format == '%')
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
					str = va_arg(args, char *);
					if (!str)
						str = "(null)";
					while (*str)
						count += _putchar(*str++);
					break;
				default:
					count += _putchar('%') + _putchar(*format);
			}
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
