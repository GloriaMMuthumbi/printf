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
        int count = 0;
        char *str;
        va_list args;

        if (format == NULL)
                return (-1);

        va_start(args, format);
        while (*format != '\0')
        {
                if (*format == '%' && *(format + 1))
                {
                        format++;
                        if (*format == 'r')
                                count += _putchar('r');
                        else
                        {
                                switch (*format)
                                {
                                        case 'c':
                                                count += _putchar(va_arg(args, int));
                                                break;
                                        case 's':
                                                {
                                                        str = va_arg(args, char *);
                                                        if (str == NULL)
                                                        str = "(null)";
                                                        while (*str)
                                                        {
                                                                count += _putchar(*str);
                                                                str++;
                                                        }
                                                }
                                                break;
                                        case '%':
                                                count += _putchar('%');
                                                break;
                                        default:
                                                count += _putchar('%');
                                                count += _putchar(*format);
                                                break;
                                }
                        }
                }
                else
                {
                        count += _putchar(*format);
                }
                format++;
        }
        va_end(args);

        return (count);
}
