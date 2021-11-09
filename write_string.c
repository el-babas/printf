#include "main.h"

/**
 * write_char - print %c
 * @args: string ...
 *
 * Return: length write
 */
int write_char(va_list args)
{
	char letter = va_arg(args, int);

	_putchar(letter);
	return (1);
}

/**
 * write_str - print %s
 * @args: string ...
 *
 * Return: length write
 */
int write_str(va_list args)
{
	int i = 0;
	char *letters = va_arg(args, char *);
	char *isnull = "(null)";

	if (letters != NULL)
	{
		for (i = 0; *(letters + i); i++)
		{
			_putchar(*(letters + i));
		}
	}
	else
	{
		for (i = 0; *(isnull + i); i++)
		{
			_putchar(*(isnull + i));
		}
	}
	return (i);
}

/**
 * write_perc - print percentage
 * @args: string ...
 *
 * Return: length write
 */
int write_perc(va_list args)
{
	(void)args;
	_putchar(37);
	return (1);
}
