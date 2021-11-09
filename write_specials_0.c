#include "main.h"

/**
 * write_bin - prints digit in binary form
 *
 * @args: list of args
 *
 * Return: length of chars written on Success
 * otherwise, returns 0 or -1
 */
int write_bin(va_list arg)
{
	int _length = 0;
	unsigned int number = va_arg(arg, int);

	_length = convert_base(2, number, 0);
	return (_length);
}
