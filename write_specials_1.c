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
	int len = 0;
	uintptr_t x = (uintptr_t)va_arg(args, int);
	char buff[2 + sizeof(x) * 2];
	size_t i;

	(void)pos;
	(void)buff;
	buff[0] = '0';
	buff[1] = 'x';
	for (i = 0; i < sizeof(x) * 2; i++)
	{
		/*
		 * For now do nothing
		 * buff[i + 2] = "0123456789abcdef"[(x >> ((sizeof(x)
		 * 2 - 1 - i) * 4)) & 0xf];
		 */
	}
	buff[2 + sizeof(x) * 2 + 1] = '\0';
	len = 0;
	return (len);
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

	len = fill_malloc(str_malloc, '%', pos);
	return (len);
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
