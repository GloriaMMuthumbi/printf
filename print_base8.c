#include "main.h"
/**
 * print_base8 - prints unsigned int in base 8
 * @n: unsigned in to be printed
 * Return: returns number of characters printed
 */
int print_base8(unsigned int n)
{
	int i = 0, count = 0;
	int octal[11];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		octal[i] = n % 8;
		n /= 8;
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(octal[i] + '0');
		count++;
	}
	return (count);
}
