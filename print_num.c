#include "main.h"
#include <stdio.h>
/**
 * print_num - prints a number
 * @n: the integer to print
 * 
 * Return: returns number of digits printed
 */
int print_num(int n)
{
	int count = 0;
	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	if (n / 10)
		count += print_num(n / 10);
	_putchar(n % 10 + '0');
	return (count++);
}
