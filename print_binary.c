#include "main.h"
/**
 *
 */
int print_binary(unsigned int n)
{
	if (n == 0)
		return (_putchar('0'));

	if (n / 2)
		print_binary(n / 2);

	return (_putchar('0' + (n % 2)));
}
