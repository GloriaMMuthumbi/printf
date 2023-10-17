#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - printing function
 * @format: sing
 * Return: (0)
*/

int _printf(const char *format, ...)
{
	int counter = 0;
	int i;
	char *s;
	char c;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		switch (*format++)
		{
			case 's':
				s = va_arg(args, char *);
				_putchar(s);
				break;
			case 'i':
				i = va_arg(args, int);
				_putchar(i);
				break;
			case 'c':
				c = (char) va_arg(args, int);
				_putchar(c);
				break;
		}
		i++;
		counter += 1;
	}
	va_end(args);
	return (counter);
}
