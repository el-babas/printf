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
/**
 * write_unint - print unsigned int
 * @arg: string arguments
 *
 * Return: length write
 */
int write_unint(va_list arg)
{
	unsigned long int number = va_arg(arg, unsigned long int);
	int _length = 0;

	_length = convert_base(10, number, 0);
	return (_length);
}
