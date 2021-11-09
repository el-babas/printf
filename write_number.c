#include "main.h"

/**
 * write_int - print %i and %d
 * @args: string ...
 * @str_malloc: buffer reserved
 * @pos: position
 *
 * Return: length write
 */
int write_int (va_list args, char *str_malloc, unsigned int pos)
{
	int number = va_arg(args, int);
	int len = 0;

	if (number < 0)
	{
		number *= -1;
		pos = fill_malloc(str_malloc, '-', pos);
	}
	len = convert_base(10, number, str_malloc, pos, 0);

	if (len == 0)
	{
		pos = fill_malloc(str_malloc, '\0', pos - 1);
	}
	return (len);
}

/**
 * write_unint - print unsigned int
 * @args: string arguments
 * @str_malloc: buffer reserved
 * @pos: position
 *
 * Return: length write
 */
int write_unint (va_list args, char *str_malloc, unsigned int pos)
{
	unsigned long int number = va_arg(args, unsigned long int);
	int len = 0;

	len = convert_base(10, number, str_malloc, pos, 0);
	return (len);
}
