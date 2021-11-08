#include "main.h"
/**
 * write_char - print %c
 * @args: string ...
 * @str_malloc: buffer reserved
 * @pos: position
 *
 * Return: length write
 */
int write_char(va_list args, char *str_malloc, unsigned int pos)
{
	char letter = va_arg(args, int);

	fill_malloc(str_malloc, letter, pos);
	return (1);
}
/**
 * write_str - print %s
 * @args: string ...
 * @str_malloc: buffer reserved
 * @pos: position
 *
 * Return: length write
 */
int write_str(va_list args, char *str_malloc, unsigned int pos)
{
	int i = 0;
	char *letters = va_arg(args, char *);
	char *isnull = "(null)";

	if (letters != NULL)
	{
		for (i = 0; *(letters + i); i++)
		{
			pos = fill_malloc(str_malloc, *(letters + i), pos);
		}
	}
	else
	{
		for (i = 0; *(isnull + i); i++)
		{
			pos = fill_malloc(str_malloc, *(isnull + i), pos);
		}
	}
	return (i);
}
