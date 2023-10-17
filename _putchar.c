#include <unistd.h>
/**
 * _putchar - prints a character
 * @c: character to be printed
 *
 * Return: returns success
 * */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
