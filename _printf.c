#include "main.h"

/**
 * _printf - function like as printf in c
 * @format: string
 *
 * Return: length of strinf print
 */
int _printf(const char *format, ...)
{
	va_list args;
	int _length = 0, x = 0;
	int (*chosen_fun)(va_list);

	va_start(args, format);
	if (format == NULL || (*(format) == '%' && *(format + 1) == '\0'))
		return (-1);
	if (*(format) == '\0')
		return (0);
	for (x = 0; *(format + x); x++)
	{
		if (format[x] != '%')
		{
			_putchar(format[x]);
			_length++;
		}
		else
		{
			chosen_fun = get_format_func(format, x + 1);
			if (chosen_fun != NULL)
			{
				_length += chosen_fun(args);
			}
			else
			{
				if (format[x + 1] == '\0')
				{
					return (-1);
				}
			}
			x++;
		}
	}
	va_end(args);
	return (_length);
}
