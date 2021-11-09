#include "main.h"

/**
 * write_address - prints address in hexadecimal
 *
 * @args: list of args
 * @str_malloc: pointer to main buffer
 * @pos: index of last push in buffer
 *
 * Return: length of chars written on Success
 * otherwise, returns 0 or -1
 */
int write_address(va_list args, char *str_malloc, unsigned int pos)
{
	(void)args;
	(void)str_malloc;
	(void)pos;
	
	return (0);
}

/**
 * write_perc - prints % char
 *
 * @args: list of args
 * @str_malloc: pointer to main buffer
 * @pos: index of last push in buffer
 *
 * Return: length of chars written on Success
 * otherwise, returns 0 or -1
 */
int write_perc(va_list args, char *str_malloc, unsigned int pos)
{
	unsigned int c = va_arg(args, int);

	(void)c;
	pos = fill_malloc(str_malloc, '%', pos);
	return (1);
}

/**
 * write_bin - prints digit in binary form
 *
 * @args: list of args
 * @str_malloc: pointer to main buffer
 * @pos: index of last push in buffer
 *
 * Return: length of chars written on Success
 * otherwise, returns 0 or -1
 */
int write_bin(va_list args, char *str_malloc, unsigned int pos)
{
	int len = 0;
	unsigned int number = va_arg(args, int);

	len = convert_base(2, number, str_malloc, pos, 0);
	return (len);
}
