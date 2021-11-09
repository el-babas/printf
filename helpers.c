#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: integer n to print using _putchar
 *
 * Return: none - void function
 *
 *
 */
int print_number(int n)
{
	unsigned int r;
	int _length = 0;

	if (n < 0)
	{
		_putchar(45);
		n *= -1;
		_length++;
	}
	r = n;

	if (r / 10)
	{
		_length += print_number(r / 10);
	}
	_putchar(r % 10 + '0');
	_length++;
	return (_length++);
}
