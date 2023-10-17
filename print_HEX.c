#include "main.h"
/**
 * print_HEX - prints unsigned int in hexadecimal form
 * with capital letters
 * @n: unsigned int to be converted
 * Return: return number of characters to be printed
 */
int print_HEX(unsigned int n)
{
	int i = 0, count = 0, rem;
	char hex[11];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		rem = n % 16;
		hex[i] = (rem < 10) ? rem + '0' : 'A' + (rem - 10);
		n /= 16;
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(hex[i]);
		count++;
	}
	return (count);
}
