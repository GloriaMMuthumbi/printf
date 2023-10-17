#include "main.h"
/**
 * print_hex - prints unsigned int in hexadecimal form
 * with small letters
 * @n: unsigned int to be converted
 * Return: return number of characters to be printed
 */
int print_hex(unsigned int n)
{
	unsigned int rem;
	int i = 0, count = 0;
	char hex[11];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		rem = n % 16;
		hex[i] = (rem < 10) ? rem + '0' : 'a' + (rem - 10);
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
