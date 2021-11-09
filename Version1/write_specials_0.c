#include "main.h"

/**
 * write_hexa - write hexadecimal number no caps
 *
 * @args: list of args
 * @str_malloc: pointer to main buffer
 * @pos: index of last push in buffer
 *
 * Return: length of chars written on Success
 * otherwise, returns 0 or -1
 */
int write_hexa(va_list args, char *str_malloc, unsigned int pos)
{
	int len = 0;
	unsigned int number = va_arg(args, int);

	len = convert_base(16, number, str_malloc, pos, 1);
	return (len);
}

/**
 * write_HEXA - write hexadecimal number no caps
 *
 * @args: list of args
 * @str_malloc: pointer to main buffer
 * @pos: index of last push in buffer
 *
 * Return: length of chars written on Success
 * otherwise, returns 0 or -1
 */

int write_HEXA(va_list args, char *str_malloc, unsigned int pos)
{
	int len = 0;
	unsigned int number = va_arg(args, int);

	len = convert_base(16, number, str_malloc, pos, 0);
	return (len);
}

/**
 * write_octal - write octadecimal number
 *
 * @args: list of args
 * @str_malloc: pointer to main buffer
 * @pos: index of last push in buffer
 *
 * Return: length of chars written on Success
 * otherwise, returns 0 or -1
 */
int write_octal(va_list args, char *str_malloc, unsigned int pos)
{
	int len = 0;
	unsigned int number = va_arg(args, int);

	len = convert_base(8, number, str_malloc, pos, 0);
	return (len);
}
