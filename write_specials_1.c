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
	int len = 0;
	unsigned int c = va_arg(args, int);

	(void)c;
	(void)len;

	len = fill_malloc(str_malloc, '%', pos);
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

/**
 * write_un - prints unknown
 *
 * @args: list of args
 * @str_malloc: pointer to main buffer
 * @pos: index of last push in buffer
 *
 * Return: length of chars written on Success
 * otherwise, returns 0 or -1
 */
int write_un(va_list args, char *str_malloc, unsigned int pos)
{
	int i = 0;
	char *discart = va_arg(args, char *);
	char t[3] = "%r";

	if (t == NULL)
		return (0);
	(void)discart;

	for (i = 0; t[i]; i++)
		pos = fill_malloc(str_malloc, t[i], pos);

	return (2);
}
