#include "main.h"
/**
 * print_unsigned_int - prints an unsigned integer
 * @n: unsigned integer to be printed
 * Return: returns number of unsigned integer
 */
int print_unsigned_int(unsigned int n)
{
	if (n == 0)
		return (_putchar('0'));

	if (n / 10)
		print_unsigned_int(n / 10);

	return (_putchar((n % 10) + '0'));
}
