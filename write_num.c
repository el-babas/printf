#include "main.h"

/**
 * write_num - prints an integer.
 * @args: argument
 *
 * Return: length of chars printed
 */
int write_num(va_list args)
{
	int n = va_arg(args, int);
	int _length = 0;

	_length = print_number(n);
	return (_length);
}
