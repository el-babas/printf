#include "main.h"

/**
 * write_bin - prints digit in binary form
 *
 * @arg: list of args
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
/**
 * write_hexa - write hexadecimal number no caps
 *
 * @args: list of args
 *
 * Return: length of chars written on Success
 * otherwise, returns 0 or -1
 */
int write_hexa(va_list args)
{
	int _length = 0;
	unsigned int number = va_arg(args, int);

	_length = convert_base(16, number, 1);
	return (_length);
}

/**
 * write_HEXA - write hexadecimal number no caps
 *
 * @args: list of args
 *
 * Return: length of chars written on Success
 * otherwise, returns 0 or -1
 */

int write_HEXA(va_list args)
{
	int _length = 0;
	unsigned int number = va_arg(args, int);

	_length = convert_base(16, number, 0);
	return (_length);
}

/**
 * write_octal - write octadecimal number
 *
 * @args: list of args
 *
 * Return: length of chars written on Success
 * otherwise, returns 0 or -1
 */
int write_octal(va_list args)
{
	int _length = 0;
	unsigned int number = va_arg(args, int);

	_length = convert_base(8, number, 0);
	return (_length);
}
