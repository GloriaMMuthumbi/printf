#include "main.h"
/**
 * print_hex - prints unsigned int in hexadecimal form
 * @n: unsigned int to be converted
 * @uppercase: uppercase var
 * Return: return number of characters to be printed
 */
int print_hex(unsigned int n, int uppercase)
{
	char hex_buffer[25];
	int count = 0, i;
	char hex_digs[] = "0123456789ABCDEF";

	if (!uppercase)
	{
		for (i = 10; i < 16; i++)
			hex_digs[i] = 'a' + (i - 10);
	}

	if (n == 0)
		_putchar('0');

	while (n)
	{
		hex_buffer[count] =  hex_digs[n % 16];
		n /= 16;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(hex_buffer[count]);
	return (count);
}
