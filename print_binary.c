#include "main.h"
/**
 * print_binary - prints unsigned integer in its binary
 * form
 * @n: unsigned integer to be printed
 * Return: returns number of characters to be printed
 */
int print_binary(unsigned int n)
{
	int count = 0;
	char binary[32];

	if (n == 0)
		return (_putchar('0'));

	while (n > 0)
	{
		binary[count] = (n & 1) + '0';
		n >>= 1;
		count++;
	}

	for (count--; count >= 0; count--)
	{
		_putchar(binary[count]);
		count++;
	}

	return (count);
}
